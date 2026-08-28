#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        num = num + i;
        for (int j = num; j <= num + i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}