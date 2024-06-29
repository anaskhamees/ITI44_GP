# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/IVI_Qt_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/IVI_Qt_autogen.dir/ParseCache.txt"
  "IVI_Qt_autogen"
  )
endif()
