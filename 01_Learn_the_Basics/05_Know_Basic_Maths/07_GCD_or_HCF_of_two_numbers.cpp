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

// Time complexity :- O(min(a,b))

// Euclidean Algorithm(Subtraction-based) :- The Euclidean Algorithm is a method for finding the greatest common divisor (GCD)
//                                           of two numbers. It operates on the principle that the GCD of two numbers remains
//                                           the same even if the smaller number is subtracted from the larger number.
// Example :- n1 = 20, n2 = 15(n1>n2) :-
//            gcd(20, 15) = gcd(20 - 15, 15) = gcd(5, 15)
//            gcd(5, 15)  = gcd(5, 15 - 5)  = gcd(5, 10)
//            gcd(5, 10)  = gcd(5, 10 - 5)  = gcd(5, 5)
//            gcd(5, 5)   = gcd(5 - 5, 5)   = gcd(0, 5)
//            Hence, return 5 as the GCD.

// Euclidean Algorithm(Modulo-based) :- A method to find GCD using remainders.
// gcd(a,b) = gcd(b, a % b)
// Repeatedly replace (a,b) with (b, a % b) until b = 0.
// When b = 0, a holds the GCD.
// Example :- n1 = 20, n2 = 15 :-
//            gcd(20, 15) = gcd(15, 20 % 15) = gcd(15, 5)
//            gcd(15, 5)  = gcd(5, 15 % 5)   = gcd(5, 0)
//            When b = 0, hence return 5 as the GCD.

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
    // Handling negative numbers & edge cases
    a = abs(a);
    b = abs(b);
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    cout << "The GCD of " << original_a << " and " << original_b << " is: " << a << endl;
    return 0;
}

// Time complexity :- O(log(min(a,b)))
// Space complexity :- O(1)

// abs(a) means absolute value( like a modulus function |a|).
// abs(-15) => output is 15.
// abs(20) => output is 20.
// abs(0) => output is 0.
