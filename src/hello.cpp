//
// C++20 CLI Template
// Copyright (c) Phillip Cooper | https://moonhappy.io
//
// This code is licensed under MIT license (see LICENSE for details)
//

#include <sstream>
#include "hello/hello.hpp"

// Check that the compiler is C++20 or later.
#if __cplusplus < 202002L
static_assert(false, "This code requires C++20 or later.");
#endif


consteval int add(int a, int b) { return a+b; }
constexpr int r = add(100, 300);

DLLEXPORT std::string hello_world() {
    std::ostringstream ss;
    ss << "Hello, World! r = " << r;
    return ss.str();
}
