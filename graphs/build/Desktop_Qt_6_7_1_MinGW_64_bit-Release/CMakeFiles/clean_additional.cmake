# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\graphs_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\graphs_autogen.dir\\ParseCache.txt"
  "graphs_autogen"
  )
endif()
