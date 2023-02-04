// Copyright (c) 2022 Zhennanc Ltd. All rights reserved.
#pragma once

#include <gtest/gtest.h>
// #include <cuda_runtime.h>

#include <iostream>
// Helper macro to create a main routine in a test that runs the benchmarks

#define FEATURE_UNITTEST_MAIN()             \
  int main(int argc, char** argv) {         \
    ::testing::InitGoogleTest(&argc, argv); \
    return RUN_ALL_TESTS();                 \
  }                                         \
  int main(int, char**)
