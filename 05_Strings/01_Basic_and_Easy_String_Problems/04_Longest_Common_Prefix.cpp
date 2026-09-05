// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the vector size:";
    cin >> n;
    cin.ignore();
    string s = "";
    cout << "Enter the string elements:";
    vector<string> v;
    int j = 0;
    while (j < n)
    {
        getline(cin, s);
        v.push_back(s);
        j++;
    }
    sort(v.begin(), v.end());
    string ans = "";
    string p = v[0];
    string q = v[v.size() - 1];
    int i = 0;
    while (i < p.size() && i < q.size() && p[i] == q[i])
    {
        ans += p[i];
        i++;
    }
    if (ans.size() == 0)
    {
        cout << ans;
    }
    else
    {
        cout << ans;
    }
    return 0;
}