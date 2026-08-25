#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << endl;
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    cout << "Total digits in a given number is: " << count << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the number: ";
//     cin >> n;
//     cout << endl;
//     int count = (int)(log10(n) + 1);
//     cout << "Total digits in a given number is: " << count << endl;
//     return 0;
// }