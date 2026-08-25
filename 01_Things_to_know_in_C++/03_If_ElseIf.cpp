#include <iostream>

int main()
{
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (number > 0)
    {
        std::cout << number << " is positive.\n";
    }
    else if (number < 0)
    {
        std::cout << number << " is negative.\n";
    }
    else
    {
        std::cout << "The number is zero.\n";
    }

    return 0;
}
