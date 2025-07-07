# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Weathr_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Weathr_autogen.dir/ParseCache.txt"
  "Weathr_autogen"
  )
endif()
