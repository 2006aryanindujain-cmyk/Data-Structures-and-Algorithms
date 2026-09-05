// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cout << "Enter the string:";
//     cin >> s;
//     int count = 0;
//     int left = 0;
//     int right = s.size() - 1;
//     while (left <= right)
//     {
//         if (s[left] == s[right])
//         {
//             left++;
//             right--;
//             count++;
//         }
//         else
//         {
//             count = 0;
//             break;
//         }
//     }
//     if (count == 0)
//     {
//         cout << "Given string " << s << " is not a palindrome string." << endl;
//     }
//     else
//     {
//         cout << "Given string " << s << " is a palindrome string." << endl;
//     }
//     return 0;
// }

// Given an input string, containing upper-case and lower-case letters, digits, and spaces( ' ' ). A word is defined as a sequence
// of non-space characters. The words in s are separated by at least one space. Return a string with the words in reverse order,
// concatenated by a single space.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string:";
    getline(cin, s);
    stack<string> st;
    string ans = "";
    for (char ch : s)
    {
        if (ch != ' ')
        {
            ans += ch;
        }
        else
        {
            st.push(ans);
            ans.clear();
        }
    }
    st.push(ans);
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
        cout << " ";
    }
    return 0;
}