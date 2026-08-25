#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int stars;
        if (i % 2 == 0)
        {
            stars = 1;
        }
        else
        {
            stars = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << stars;
            stars = 1 - stars;
        }
        cout << endl;
    }
    return 0;
}