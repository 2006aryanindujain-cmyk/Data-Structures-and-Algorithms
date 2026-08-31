// Switch case used to execute one block of code among multiple options, based on the value of a variable/expression - an
// alternative to if-else conditions.

// A switch statement necessitates that its expression results in a constant value. This can include constants and arithmetic operations.

// Switch statement are exclusively designed to handle integer or character values. Ensure that the expression provides
// value of type int or char.

#include <bits/stdc++.h>
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