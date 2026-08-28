#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << n << endl;
        n--;
    }
    print(n);
}
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    print(n);
}