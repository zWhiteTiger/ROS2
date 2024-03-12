# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ce_robot_bootup_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ce_robot_bootup_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ce_robot_bootup_FOUND FALSE)
  elseif(NOT ce_robot_bootup_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ce_robot_bootup_FOUND FALSE)
  endif()
  return()
endif()
set(_ce_robot_bootup_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ce_robot_bootup_FIND_QUIETLY)
  message(STATUS "Found ce_robot_bootup: 0.0.0 (${ce_robot_bootup_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ce_robot_bootup' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ce_robot_bootup_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ce_robot_bootup_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${ce_robot_bootup_DIR}/${_extra}")
endforeach()
