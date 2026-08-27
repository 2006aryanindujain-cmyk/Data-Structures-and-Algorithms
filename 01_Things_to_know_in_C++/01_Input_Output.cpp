// Libraries provide pre-build functions and tools.
// #include<iostream -> used for input/output.
// #include<math.h> -> used for mathematical functions.
// To print output, we use cout.
// Use \n or endl to print on new lines.
// \n -> insert a new line(faster).
// endl -> inserts a new line and flushes the output buffer (slower).
// cin is used to take input from the user.

#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!" << endl;
    int x, y;
    cin >> x >> y;
    cout << "Value of x is " << x << " and y is " << y << endl;
    return 0;
}

// Instead of including libraries one by one, we can use #include<bits/stdc++.h>. It includes almost all standard libraries at once.