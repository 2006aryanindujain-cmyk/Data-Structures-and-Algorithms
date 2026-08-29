// #include <bits/stdc++.h>
// using namespace std;
// bool palindrome(string &s, int i, int j)
// {
//     if (i >= j)
//     {
//         return true;
//     }
//     else if (s[i] != s[j])
//     {
//         return false;
//     }
//     else
//     {
//         return palindrome(s, i + 1, j - 1);
//     }
// }
// int main()
// {
//     string s;
//     cout << "Enter the string:";
//     cin >> s;
//     if (palindrome(s, 0, s.size() - 1))
//     {
//         cout << "Given string is palindrome." << endl;
//     }
//     else
//     {
//         cout << "Given string is not palindrome." << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s, int n, int i)
{
    if (i >= n / 2)
    {
        return true;
    }
    if (s[i] != s[n - i - 1])
    {
        return false;
    }
    else
    {
        return palindrome(s, n, i + 1);
    }
}
int main()
{
    string s;
    cout << "Enter the string:";
    cin >> s;
    if (palindrome(s, s.size(), 0))
    {
        cout << "Given string is palindrome." << endl;
    }
    else
    {
        cout << "Given string is not palindrome." << endl;
    }
    return 0;
}