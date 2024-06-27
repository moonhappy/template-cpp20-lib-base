//
// C++20 CLI Template
// Copyright (c) Phillip Cooper | https://moonhappy.io
//
// This code is licensed under MIT license (see LICENSE for details)
//

#include <string>

#ifndef HELLO_HELLO_HPP_
#define HELLO_HELLO_HPP_

#ifdef _WIN32
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT
#endif


std::string hello_world();


#endif  // HELLO_HELLO_HPP_

