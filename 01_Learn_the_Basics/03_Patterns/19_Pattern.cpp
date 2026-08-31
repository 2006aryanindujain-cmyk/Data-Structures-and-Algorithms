#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    int stars;
    int spaces;
    for (int i = 1; i <= 2 * n; i++)
    {
        if (i <= n)
        {
            stars = n;
        }
        else
        {
            stars = 2 * i - n - 1;
        }
        for (int j = i; j <= stars; j++)
        {
            cout << "*";
        }
        if (i <= n)
        {
            spaces = 2 * i - 1;
        }
        else
        {
            spaces = 4 * n - 2 * i + 1;
        }
        for (int j = 1; j < spaces; j++)
        {
            cout << " ";
        }
        for (int j = i; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
