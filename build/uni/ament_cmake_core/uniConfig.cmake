# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_uni_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED uni_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(uni_FOUND FALSE)
  elseif(NOT uni_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(uni_FOUND FALSE)
  endif()
  return()
endif()
set(_uni_CONFIG_INCLUDED TRUE)

# output package information
if(NOT uni_FIND_QUIETLY)
  message(STATUS "Found uni: 0.0.0 (${uni_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'uni' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${uni_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(uni_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${uni_DIR}/${_extra}")
endforeach()
