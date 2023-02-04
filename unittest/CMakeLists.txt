add_subdirectory(unittest_lib)

set(SOURCE_FILES entry.cc)

list(APPEND SOURCE_FILES std_optional/optional_test.cc)

add_executable(feature_test ${SOURCE_FILES})
target_link_libraries(feature_test unittest_lib)

install(TARGETS feature_test RUNTIME)
