#include <iostream>

int main()
{
    int choice;

    std::cout << "Enter a number between 1 and 3: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        std::cout << "You selected option 1.\n";
        break;
    case 2:
        std::cout << "You selected option 2.\n";
        break;
    case 3:
        std::cout << "You selected option 3.\n";
        break;
    default:
        std::cout << "Invalid choice. Please enter 1, 2, or 3.\n";
        break;
    }

    return 0;
}
