#include <bits/stdc++.h>
using namespace std;
void print(int n, string name)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << name << endl;
        n--;
    }
    print(n, name);
}
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    string name;
    cout << "Enter your name:";
    cin >> name;
    print(n, name);
}