# Secure Coding - Robert C. Seacord
This repository contains extended code examples from the book "Secure Coding - Robert C. Seacord".

Book is more oriented to C and C++ secure coding. Repository will contain only cxx examples, even if it was writen on C in the book.

## chapter2_strings
### 2.1
- **unsafe_sizeof.cpp** - you should not use sizeof for given array, because it will return pointer size, instead of size of an actual array, therefore it will misscalculate your array size and it will lead to unexpected behavior. You should give size of your array in function parameters.
