#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << endl;
    int temp = n;
    int digits = 0;
    while (n != 0)
    {
        n = n / 10;
        digits++;
    }
    n = temp;
    int sum = 0;
    while (n != 0)
    {
        int rev = n % 10;
        sum = sum + pow(rev, digits);
        n = n / 10;
    }
    if (sum == temp)
    {
        cout << temp << " is an armstrong number." << endl;
    }
    else
    {
        cout << temp << " is not an armstrong number." << endl;
    }
    return 0;
}