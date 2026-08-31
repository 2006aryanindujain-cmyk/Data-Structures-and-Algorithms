#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << endl;
    int count = 0;
    if (n < 2)
    {
        cout << n << " is not a prime number" << endl;
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}

// Time Complexity:
// n < 2 check          -> O(1)
// Prime checking loop  -> O(√n)
// Break on divisor     -> may terminate early
// Worst Case           -> O(√n)
