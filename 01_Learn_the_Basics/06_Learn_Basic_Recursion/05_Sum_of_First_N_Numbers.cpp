// Parameterised solution :-

// #include <bits/stdc++.h>
// using namespace std;
// void sum(int i, int s, int n)
// {
//     if (i < 1)
//     {
//         cout << "Sum of first " << n << " numbers is " << s << "." << endl;
//         return;
//     }
//     else
//     {
//         sum(i - 1, s + i, n);
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter the number:";
//     cin >> n;
//     int s = 0;
//     sum(n, s, n);
// }

// Functional solution :-

// #include <bits/stdc++.h>
// using namespace std;
// int sum(int i, int s)
// {
//     if (i < 1)
//     {
//         return s;
//     }
//     else
//     {
//         sum(i - 1, s + i);
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter the number:";
//     cin >> n;
//     int s = 0;
//     int result = sum(n, s);
//     cout << "Sum of first " << n << " numbers is " << result << "." << endl;
// }

#include <bits/stdc++.h>
using namespace std;
int sum(int i)
{
    if (i == 0)
    {
        return 0;
    }
    else
    {
        return i + sum(i - 1);
    }
}
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    int result = sum(n);
    cout << "Sum of first " << n << " numbers is " << result << "." << endl;
}