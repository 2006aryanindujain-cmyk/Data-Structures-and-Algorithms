// #include <bits/stdc++.h>
// using namespace std;
// void print(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     else
//     {
//         cout << n << endl;
//         n--;
//     }
//     print(n);
// }
// int main()
// {
//     int n;
//     cout << "Enter the number:";
//     cin >> n;
//     print(n);
// }

// #include <bits/stdc++.h>
// using namespace std;
// void print(int i, int n)
// {
//     if (i < 1)
//     {
//         return;
//     }
//     else
//     {
//         cout << i << endl;
//         print(i - 1, n);
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter the number:";
//     cin >> n;
//     print(n, n);
// }

#include <bits/stdc++.h>
using namespace std;
void print(int i, int n)
{
    if (i > n)
    {
        return;
    }
    else
    {
        print(i + 1, n);
        cout << i << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    print(1, n);
}