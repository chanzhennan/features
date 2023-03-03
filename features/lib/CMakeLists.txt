file(GLOB_RECURSE SRCS *.cc *.h *.hpp)

if(NOT BUILD_SHARED_LIBS)
  add_library(features_lib ${SRCS})
else()
  add_library(features_lib SHARED ${SRCS})
endif()
target_link_libraries(features_lib gtest benchmark::benchmark pthread)
