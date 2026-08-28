// #include <bits/stdc++.h>
// using namespace std;
// void print(int n, int i)
// {
//     if (i > n)
//     {
//         return;
//     }
//     else
//     {
//         cout << i << endl;
//         i++;
//     }
//     print(n, i);
// }
// int main()
// {
//     int i = 1;
//     int n;
//     cout << "Enter the number:";
//     cin >> n;
//     print(n, i);
// }

// #include <bits/stdc++.h>
// using namespace std;
// void print(int i, int n)
// {
//     if (i > n)
//     {
//         return;
//     }
//     else
//     {
//         cout << i << endl;
//     }
//     print(i + 1, n);
// }
// int main()
// {
//     int n;
//     cout << "Enter the number:";
//     cin >> n;
//     print(1, n);
// }

#include <bits/stdc++.h>
using namespace std;
void print(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    else
    {
        print(i - 1, n);
        cout << i << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    print(n, n);
}