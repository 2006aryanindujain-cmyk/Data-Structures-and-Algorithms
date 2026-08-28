// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readability.
// Functions are used to use same code multiple time.
// void function does not return anything.
// return function return something.
// Pass by value sends a copy of the variable(original unchanged).
// Pass by reference sends the actual variable's address(original gets modified).
// Arrays always send by the pass by reference.

#include <bits/stdc++.h>
using namespace std;
void incrementByValue(int x)
{
    x++;
    cout << "Inside function (by value): " << x << endl;
}

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
