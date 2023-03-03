add_subdirectory(lib)

set(SOURCE_FILES main.cc)

list(APPEND SOURCE_FILES std_c++17/optional.cc)

add_executable(feature_test ${SOURCE_FILES})
target_link_libraries(feature_test features_lib)

install(TARGETS feature_test RUNTIME)
