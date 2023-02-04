

#include <gtest/gtest.h>

#include <optional>

std::optional<int> divide(int a, int b) {
  if (b == 0) return {};
  return a / b;
}

TEST(CPP17Test, optional) {
  // do not has value.
  EXPECT_FALSE(divide(1, 0).has_value());

  // has value.
  EXPECT_EQ(1, divide(2, 2).value());
}
