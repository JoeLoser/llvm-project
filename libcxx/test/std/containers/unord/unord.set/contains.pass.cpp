//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++98, c++03, c++11, c++14, c++17
// <unordered_set>

// template <class Value, class Hash = hash<Value>, class Pred = equal_to<Value>,
//           class Alloc = allocator<Value>>
// class unordered_set

// bool contains(const key_type& k) const;

#include <unordered_set>
#include <cassert>

int main(int, char**)
{
    std::unordered_set<int> c{};
    assert(!c.contains(1));

    c.insert(1);
    assert(c.contains(1));

    return 0;
}
