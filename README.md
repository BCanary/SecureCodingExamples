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
- ```unsafe_sizeof::dowork()``` -- outputs an example of sizeof after the array declaration and after array passing in clear(int array[]);
- ```unsafe_sizeof::clear(int array[])``` -- outputs the sizeof of given array and its incorrect calculated length in result. 
#### Example:
```unsafe_sizeof::dowork();```
#### Output:
```
sizeof(int*): 8
sizeof(int): 4
sizeof(int*)/sizeof(int): 2

int dis[12]; // inside dowork()
sizeof(array): 48
sizeof(array[0]): 4
sizeof(array)/sizeof(array[0]): 12

// inside clear(int array[])
sizeof(array): 8
sizeof(array[0]): 4
sizeof(array)/sizeof(array[0]): 2
```
