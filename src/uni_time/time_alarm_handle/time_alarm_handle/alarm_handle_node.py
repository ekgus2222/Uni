from time_msgs.srv import Time

import rclpy
from rclpy.node import Node

import requests; from urllib.parse import urlparse
import pandas as pd
import geopandas
import datetime as dt

# def address_to_lalotude(address)
#       parameter type : string
#       return : string list -> ['latitude(x)', 'longitude(y)'] 

# def transport_info(origin, destination)
#       parameter type : two string list -> ['latitude(x)', 'longitude(y)'] 
#       return : list(1 string, 1 int, 2 string, 1(2) int) -> ['bus/subway', the time it takes, 'busNo/subwayNo', stationCode, (wayCode(for Subway))]
#           + tip : 'bus' = '2', subway = '1'

# def rt_traffic_info(traffic)
#       parameter type : list(1 string, 1 int, 2 string, 1(2) int) -> ['bus/subway', the time it takes, 'busNo/subwayNo', stationCode, (wayCode(for Subway))]
#           + tip : 'bus' = '2', subway = '1'
#       return : remaining time (Unit : min)

# def cal_time(op, time, minute)
#       parameter type : string('-' or '+'), string('00:00' or '0:00'), int(minute)
#       return : alarm_time -> string('00:00' or '0:00')
class AlarmHandleNode(Node):

    def __init__(self):
        super().__init__('alarm_handle_node')
        self.srv = self.create_service(Time, 'get_time', self.get_time)

    def address_to_lalotude(self, address):
        url = "https://dapi.kakao.com/v2/local/search/address.json?query="+address
        result = requests.get(urlparse(url).geturl(),
                               headers={"Authorization":"KakaoAK 64967e9391a954a0f82bc43a071e0668"})
        json_obj = result.json()
        for document in json_obj['documents']:
            val = [document['x'], document['y']]
        return val

    def transport_info(self, origin, destination):
        rtn_val = []

        SX = origin[0]
        SY = origin[1]
        EX = destination[0]
        EY = destination[1]
        url = "https://api.odsay.com/v1/api/searchPubTransPathT?apiKey=ZI%2BDQYMSsl%2BsNIt0XS8jwqMaF%2BOnN%2BkyiAVNjYIlaVU&lang=0&SX=" + SX + "&SY=" + SY + "&EX=" + EX + "&EY=" + EY
        result = requests.get(urlparse(url).geturl())
        json_obj = result.json()


        for traffic in json_obj['result']['path'][0]['subPath']:
            if traffic['trafficType'] == 2:       # BUS
                rtn_val = ['2', json_obj['result']['path'][0]['info']['totalTime'], traffic['lane'][0]['busNo'], traffic['startName'], traffic['startID']]
                break
            elif traffic['trafficType'] == 1:     # SUBWAY
                rtn_val = ['1', json_obj['result']['path'][0]['info']['totalTime'], traffic['lane'][0]['name'], traffic['startName'], traffic['startID'], traffic["wayCode"]]
                break

        return rtn_val

    def rt_traffic_info(self, traffic): # return min
        stationID = traffic[4]
        if traffic[0] == '2': # BUS
            url = 'https://api.odsay.com/v1/api/realtimeStation?apiKey=ZI%2BDQYMSsl%2BsNIt0XS8jwqMaF%2BOnN%2BkyiAVNjYIlaVU&lang=0&stationID='+str(stationID)
            result = requests.get(urlparse(url).geturl())
            json_obj = result.json()

            for info in json_obj['result']['real']:
                if info['routeNm'] == traffic[2]:
                    return int(info['arrival1']['arrivalSec']/60) #min

        elif traffic[0] == "1": # SUBWAY
            if traffic[5] == '1': updown = 'up'
            else : updown = 'down'

            url = 'https://api.odsay.com/v1/api/subwayTimeTable?apiKey=ZI%2BDQYMSsl%2BsNIt0XS8jwqMaF%2BOnN%2BkyiAVNjYIlaVU&lang=0&stationID='+str(stationID)+'&wayCode='+str(traffic[5])
            result = requests.get(urlparse(url).geturl())
            json_obj = result.json()

            x = dt.datetime.now()
            weekday = x.weekday()
            Idx = x.hour
            Min = x.minute
            Day = 'OrdList'
            if x.weekday() == 5:
                Day = 'SatList'
            elif x.weekday() == 6:
                Day = 'SunList'
    
            flag = False

            for line in json_obj['result'][Day][updown]['time']:
                if int(line['Idx']) >= Idx:
                    strl = line['list'].split()
                    for tt in strl:  
                        if int(line['Idx']) == Idx:
                            if int(tt[0]+tt[1]) > Min :
                                time = str(line['Idx'])+':'+tt[0]+tt[1]
                                flag = True
                                break
                        else : 
                            time = str(line['Idx'])+':'+tt[0]+tt[1]
                            flag = True
                            break
                if flag :
                    break

            sp = time.split(':')
            hour = int(sp[0])-x.hour
            minu = int(sp[1])-x.minute

            return str(hour*60+min) # min

    def cal_time(self, op, time, minute):
        sp = time.split(':') # sp = ['hour', 'min']
        if op == '-':
            hour = int(sp[0])
            minu = int(sp[1]) - minute

            while minu < 0 :
                minu += 60
                hour -= 1

            while hour < 0 :
                hour += 24

            return str(hour) + ':' + str(minu)

        elif op == '+':
            hour = int(sp[0])
            minu = int(sp[1]) + minute

            while minu > 59 :
                minu -= 60
                hour += 1

            while hour > 23 :
                hour -= 24
            
            return str(hour) + ':' + str(minu)

    def get_time(self, request, response):
        self.get_logger().info('Received request!')
        if request.request == "alarm_set":
            origin = self.address_to_lalotude(request.home_address)
            destination = self.address_to_lalotude(request.office_address)
            traffic = self.transport_info(origin, destination)
            response.alarm_time_response = str(self.cal_time('-', request.time_to_work, (int)(request.required_time)+traffic[1])) # time_to_work(00:00) - required_time(min) - traffic[1](min)
            print("alarm : " + response.alarm_time_response)
            self.get_logger().info(('Wake time Response: %s' % response.alarm_time_response))     

        else : # transport_req
            origin = self.address_to_lalotude(request.home_address)
            destination = self.address_to_lalotude(request.office_address)
            traffic = self.transport_info(origin, destination)
            response.transport_response = str(self.rt_traffic_info(traffic)) + ',' + str(traffic[2]) + ',' + str(traffic[3])
            print("transport : " + response.transport_response)
            self.get_logger().info(('Transport Time Response: %s' % response.transport_response)) 
            # lefttime (min), bus/subway No, bus/subway stop
            
              
        #self.get_logger().info('Incoming request\nhour: %d minute: %d' % (request.request_hour, request.request_minute))

        return response





def main(args=None):
    rclpy.init(args=args)

    alarm_handle_node = AlarmHandleNode()

    rclpy.spin(alarm_handle_node)

    rclpy.shutdown()


if __name__ == '__main__':
    main()