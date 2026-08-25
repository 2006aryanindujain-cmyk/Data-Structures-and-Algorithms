#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        for (char j = 'A' + i - 1; j <= 'A' + n - 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}