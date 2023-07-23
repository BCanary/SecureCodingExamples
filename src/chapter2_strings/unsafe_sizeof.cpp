/*
 * chapter 2.1
 * sizeof(array) is unsafe for getting array length
 * for string should use strlen(), but it works for only correct null byte ended strings 
 * and moreover it does not show how much accessible elements do you have  
 * clang throws "sizeof(array) will return the size of pointer sizeof(T*)/sizeof(T)"
 * for 32-bit Windows sizeof(int*) will be 4, for 64-bit Linux it will be 8
 * sizeof(array) == sizeof(int*)
 *
 * HOW TO FIX:
 * Always give a function array size, do not calculate its size inside a function
 */
#include <iostream>

#include "../../include/chapter2_strings/unsafe_sizeof.h"

void unsafe_sizeof::clear(int array[])
{
    // CLANGD: sizeof (array) will return the size of the pointer, not the array itself
    // This for cycle will fill only the first two elements because 8 / 4 = 2
    for (size_t i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
    {
        array[i] = 0;
    }
    std::cout << "// inside clear(int array[])" << std::endl;
    std::cout << "sizeof(array): " << sizeof(array) << std::endl;
    std::cout << "sizeof(array[0]): " << sizeof(array[0]) << std::endl;
    std::cout << "sizeof(array)/sizeof(array[0]): " << sizeof(array)/sizeof(array[0]) << std::endl;
    std::cout << std::endl;
}

void unsafe_sizeof::dowork()
{
    std::cout << "sizeof(int*): " << sizeof(int*) << std::endl;
    std::cout << "sizeof(int): " << sizeof(int) << std::endl;
    std::cout << "sizeof(int*)/sizeof(int): " << sizeof(int*)/sizeof(int) << std::endl;
    std::cout << std::endl;

    int dis[12];

    std::cout << "int dis[12]; // inside dowork()" << std::endl;
    std::cout << "sizeof(array): " << sizeof(dis) << std::endl;
    std::cout << "sizeof(array[0]): " << sizeof(dis[0]) << std::endl;
    std::cout << "sizeof(array)/sizeof(array[0]): " << sizeof(dis)/sizeof(dis[0]) << std::endl;
    std::cout << std::endl;

    unsafe_sizeof::clear(dis); // It is actually dis*
}
