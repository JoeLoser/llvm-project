//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// test <setjmp.h>

#include <setjmp.h>
#include <type_traits>

#ifndef setjmp
#error setjmp not defined
#endif

int main()
{
    jmp_buf jb;
    ((void)jb); // Prevent unused warning
    static_assert((std::is_same<decltype(longjmp(jb, 0)), void>::value),
                  "std::is_same<decltype(longjmp(jb, 0)), void>::value");
}
