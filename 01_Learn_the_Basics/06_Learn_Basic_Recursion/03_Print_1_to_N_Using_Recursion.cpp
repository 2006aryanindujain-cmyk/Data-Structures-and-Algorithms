#include <bits/stdc++.h>
using namespace std;
void print(int n, int i)
{
    if (i > n)
    {
        return;
    }
    else
    {
        cout << i << endl;
        i++;
    }
    print(n, i);
}
int main()
{
    int i = 1;
    int n;
    cout << "Enter the number:";
    cin >> n;
    print(n, i);
}