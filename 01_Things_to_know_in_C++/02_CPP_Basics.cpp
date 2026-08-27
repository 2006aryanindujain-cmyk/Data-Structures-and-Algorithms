// A variable is a name memory location to store data.

// int -> 4 bytes
// float -> 4 bytes
// double -> 8 bytes
// char -> 1 byte
// bool -> 1 byte
// string -> size varies

// Constants are the values that don't change throughout the program.
// const int x =10;

// Single-line comment
/*Multi-line comment*/

#include <bits/stdc++.h>
int main()
{
    // integer types
    int intValue = 42;
    short shortValue = 7;
    long longValue = 1234567890;

    // floating-point types
    float floatValue = 3.14f;
    double doubleValue = 2.71828;

    // character and boolean
    char charValue = 'A';
    bool boolValue = true;

    // string type from the standard library
    std::string text = "Hello, C++ variables!";

    // pointer and reference
    int *pointerValue = &intValue;
    int &referenceValue = intValue;

    std::cout << "int: " << intValue << '\n';
    std::cout << "short: " << shortValue << '\n';
    std::cout << "long: " << longValue << '\n';
    std::cout << "float: " << floatValue << '\n';
    std::cout << "double: " << doubleValue << '\n';
    std::cout << "char: " << charValue << '\n';
    std::cout << "bool: " << std::boolalpha << boolValue << '\n';
    std::cout << "string: " << text << '\n';
    std::cout << "pointer to int value: " << *pointerValue << '\n';
    std::cout << "reference to int value: " << referenceValue << '\n';

    return 0;
}
