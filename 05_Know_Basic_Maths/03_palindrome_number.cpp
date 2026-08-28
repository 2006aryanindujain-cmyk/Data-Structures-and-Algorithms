#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    cout << endl;
    int temp = n;
    int rev = 0;
    while (n != 0)
    {
        int ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }
    if (temp == rev)
    {
        cout << temp << " is a palindrome number." << endl;
    }
    else
    {
        cout << temp << " is not a palindrome number." << endl;
    }
}
