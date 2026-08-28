#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    int res = fact(n);
    cout << "Factorial of " << n << " is " << res << "." << endl;
    return 0;
}

// Time Complexity  :- O(N)
// Space Complexity :- O(N) (Auxiliary recursion stack)