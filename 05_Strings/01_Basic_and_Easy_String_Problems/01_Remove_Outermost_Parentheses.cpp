// A valid parentheses string is defined by the following rules:
// -> It is the empty string "".
// -> If A is a valid parentheses string, then so is "(" + A + ")".
// -> If A and B are valid parentheses strings, then A + B is also valid.

// A primitive valid parentheses string is a non-empty valid string that cannot be split into two
// or more non-empty valid parentheses strings.

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cout << "Enter the parentheses string:";
//     cin >> s;
//     stack<int> st;
//     string ans;
//     for (char ch : s)
//     {
//         if (ch == ')')
//         {
//             st.pop();
//         }
//         if (!st.empty())
//         {
//             ans += ch;
//         }
//         if (ch == '(')
//         {
//             st.push(ch);
//         }
//     }
//     cout << "The string becomes " << ans << " after the removing of outermost parentheses of the string" << s << ".";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter the parentheses string:";
    cin >> s;
    int count = 0;
    string ans;
    for (char ch : s)
    {
        if (ch == ')')
        {
            count--;
        }
        if (count != 0)
        {
            ans += ch;
        }
        if (ch == '(')
        {
            count++;
        }
    }
    cout << "The string becomes " << ans << " after the removing of outermost parentheses of the string" << s << ".";
    return 0;
}