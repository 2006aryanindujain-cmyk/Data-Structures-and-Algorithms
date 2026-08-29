// #include <bits/stdc++.h>
// using namespace std;
// int fibonacci(int i)
// {
//     if (i == 0)
//     {
//         return 0;
//     }
//     else if (i == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return fibonacci(i - 1) + fibonacci(i - 2);
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter the number:";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cout << fibonacci(i) << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int fibonacci(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     int last = fibonacci(n - 1);
//     int slast = fibonacci(n - 2);
//     return last + slast;
// }
// int main()
// {
//     int n;
//     cout << "Enter the number:";
//     cin >> n;
//     cout << fibonacci(n);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void Fibonacci(int n, int a, int b)
{
    if (n == 0)
    {
        return;
    }
    cout << a << " ";
    Fibonacci(n - 1, b, a + b);
}
int main()
{
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    if (n > 0)
    {
        Fibonacci(n, 0, 1);
    }
    return 0;
}