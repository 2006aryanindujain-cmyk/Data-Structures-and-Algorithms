#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int spaces = 2 * (n - i);
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
