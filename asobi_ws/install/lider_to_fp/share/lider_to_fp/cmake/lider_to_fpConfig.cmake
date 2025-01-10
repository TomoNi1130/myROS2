# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_lider_to_fp_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED lider_to_fp_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(lider_to_fp_FOUND FALSE)
  elseif(NOT lider_to_fp_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(lider_to_fp_FOUND FALSE)
  endif()
  return()
endif()
set(_lider_to_fp_CONFIG_INCLUDED TRUE)

# output package information
if(NOT lider_to_fp_FIND_QUIETLY)
  message(STATUS "Found lider_to_fp: 0.0.0 (${lider_to_fp_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'lider_to_fp' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT lider_to_fp_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(lider_to_fp_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${lider_to_fp_DIR}/${_extra}")
endforeach()
