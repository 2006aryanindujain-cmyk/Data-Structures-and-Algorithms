#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character:";
    cin >> ch;
    for (char i = 'A'; i <= ch; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
