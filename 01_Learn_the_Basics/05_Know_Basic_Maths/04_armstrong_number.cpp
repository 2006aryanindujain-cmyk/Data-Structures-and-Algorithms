#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Negative numbers are not Armstrong numbers." << endl;
        return 0;
    }
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
        sum = sum + round(pow(rev, digits));
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
