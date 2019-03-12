//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++98, c++03, c++11, c++14, c++17
// <unordered_map>

// template <class Key, class T, class Hash = hash<Key>, class Pred = equal_to<Key>,
//           class Alloc = allocator<pair<const Key, T>>>
// class unordered_map

// bool contains(const key_type& k) const;

#include <unordered_map>
#include <string>
#include <cassert>

int main(int, char**)
{
    std::unordered_map<int, std::string> c{};
    assert(!c.contains(1));

    c[1] = "one";
    assert(c.contains(1));

    return 0;
}
