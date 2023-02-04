file(GLOB_RECURSE SRCS *.cc *.h *.hpp)

if(NOT BUILD_SHARED_LIBS)
  add_library(unittest_lib ${SRCS})
else()
  add_library(unittest_lib SHARED ${SRCS})
endif()
target_link_libraries(unittest_lib gtest benchmark::benchmark pthread)
