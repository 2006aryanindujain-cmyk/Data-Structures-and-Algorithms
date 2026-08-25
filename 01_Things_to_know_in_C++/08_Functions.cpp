#include <iostream>
using namespace std;

// Pass by Value - changes don't affect original variable
void incrementByValue(int x)
{
    x++;
    cout << "Inside function (by value): " << x << endl;
}

// Pass by Reference - changes affect original variable
void incrementByReference(int &x)
{
    x++;
    cout << "Inside function (by reference): " << x << endl;
}

int main()
{
    int num = 5;

    cout << "=== Pass by Value ===" << endl;
    cout << "Before: " << num << endl;
    incrementByValue(num);
    cout << "After: " << num << endl
         << endl;

    cout << "=== Pass by Reference ===" << endl;
    cout << "Before: " << num << endl;
    incrementByReference(num);
    cout << "After: " << num << endl;

    return 0;
}
