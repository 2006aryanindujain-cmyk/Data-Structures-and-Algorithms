// Given a string s, representing a large integer, the task is to return the largest-valued odd integer (as a string)
// that is a substring of the given string s.
// The number returned should not have leading zero's. But the given input string may have leading zero.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string:";
    getline(cin, s);
    vector<char> v;
    int count = 0;
    for (char ch : s)
    {
        if (ch == '0')
        {
            count++;
        }
        else
        {
            break;
        }
    }
    for (int i = count; i < s.size(); i++)
    {
        v.push_back(s[i]);
    }
    while (!v.empty())
    {
        if (((v.back() - '0') % 2) == 0)
        {
            v.pop_back();
        }
        else
        {
            break;
        }
    }
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it;
    }
    return 0;
}
