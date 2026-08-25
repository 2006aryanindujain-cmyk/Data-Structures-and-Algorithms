#include <iostream>
#include <string>

int main()
{
    int number;
    std::string name;

    // Input from the user
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Enter your name: ";
    std::cin >> name;

    // Output to the console
    std::cout << "You entered number: " << number << "\n";
    std::cout << "Hello, " << name << "!\n";

    return 0;
}
