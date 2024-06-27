//
// C++20 CLI Template
// Copyright (c) Moon Happy / Phillip Cooper.
//
// This code is licensed under MIT license (see LICENSE for details)
//

#include <gtest/gtest.h>
#include "hello/hello.hpp"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings to be equal.
  EXPECT_STREQ(hello_world().c_str(), "Hello, World! r = 400");
}
