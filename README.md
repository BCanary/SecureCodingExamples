# Secure Coding - Robert C. Seacord
This repository contains extended code examples from the book "Secure Coding - Robert C. Seacord".

Book is more oriented to C and C++ secure coding. Repository will contain only cxx examples, even if it was writen on C in the book.

# How to compile
1. make directory build inside copied repository
2. change directory to build
3. ```cmake ..```
4. change directory back to root of the repository
5. ```cmake --build build```
6. find the executable in the build directory (depends on your system and compiler, for example it could be "/build/Debug/main.cpp")

## 2. Strings
### 2.1. Character strings
### unsafe_sizeof.cpp
> You should not use sizeof for given array, because it will return pointer size, instead of size of an actual array, therefore it will misscalculate your array size and it will lead to unexpected behavior. You should give size of your array in function parameters.

#### Functions:
```cpp unsafe_sizeof::dowork()``` - will show in console example of sizeof after array declaration and after array passing in clear(int array[]),
```cpp unsafe_sizeof::clear(int array[])``` - will show in console sizeof of given array and its incorrect calculated length. 
