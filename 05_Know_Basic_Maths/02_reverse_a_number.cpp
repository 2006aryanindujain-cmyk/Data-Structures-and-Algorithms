#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << endl;
    int rev = 0;
    while (n != 0)
    {
        int temp = n % 10;
        rev = rev * 10 + temp;
        n = n / 10;
    }
    cout << "Reverse of a given number is: " << rev << endl;
    return 0;
}