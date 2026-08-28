#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << endl;
    if (n <= 0)
    {
        cout << "Please enter a positive number." << endl;
        return 0;
    }
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (n / i != i)
            {
                v.push_back(n / i);
            }
        }
    }
    sort(v.begin(), v.end());
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ",";
    }
    return 0;
}