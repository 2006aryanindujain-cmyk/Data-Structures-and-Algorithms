#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5 - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i * 2; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}