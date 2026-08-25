// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b;
//     cout << "Enter the first number: ";
//     cin >> a;
//     cout << endl;
//     cout << "Enter the second number: ";
//     cin >> b;
//     cout << endl;
//     int min = a < b ? a : b;
//     int temp = 1;
//     for (int i = min; i >= 1; i--)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             temp = i;
//             break;
//         }
//     }
//     cout << temp << " is the gcd of " << a << " and " << b;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    int original_a = a;
    int original_b = b;
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    cout << "The GCD of " << original_a << " and " << original_b << " is: " << a << endl;
    return 0;
}