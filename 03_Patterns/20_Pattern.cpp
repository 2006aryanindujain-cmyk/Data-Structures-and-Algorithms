#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the numbers:";
    cin >> n;
    int stars;
    int spaces;
    for (int i = 1; i < 2 * n; i++)
    {
        if (i <= n)
        {
            stars = i;
        }
        else
        {
            stars = 2 * n - i;
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        if (i <= n)
        {
            spaces = 2 * n - 2 * i;
        }
        else
        {
            spaces = 2 * i - 2 * n;
        }
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}