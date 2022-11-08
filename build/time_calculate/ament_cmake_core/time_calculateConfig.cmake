# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_time_calculate_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED time_calculate_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(time_calculate_FOUND FALSE)
  elseif(NOT time_calculate_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(time_calculate_FOUND FALSE)
  endif()
  return()
endif()
set(_time_calculate_CONFIG_INCLUDED TRUE)

# output package information
if(NOT time_calculate_FIND_QUIETLY)
  message(STATUS "Found time_calculate: 0.0.0 (${time_calculate_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'time_calculate' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${time_calculate_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(time_calculate_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${time_calculate_DIR}/${_extra}")
endforeach()
