// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size of an array:";
//     cin >> n;
//     int arr[n];
//     cout << "Enter array elements:";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int *p = &arr[0];
//     int *q = &arr[n - 1];
//     int temp;
//     while (p < q)
//     {
//         temp = *p;
//         *p = *q;
//         *q = temp;
//         p++;
//         q--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void reverse(int arr[], int *p, int *q)
// {
//     if (p > q)
//     {
//         return;
//     }
//     swap(*p, *q);
//     reverse(arr, p + 1, q - 1);
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of an array:";
//     cin >> n;
//     int arr[n];
//     cout << "Enter array elements:";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     reverse(arr, &arr[0], &arr[n - 1]);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int i, int n)
{
    if (i >= n / 2)
    {
        return;
    }
    else
    {
        swap(arr[i], arr[n - i - 1]);
        reverse(arr, i + 1, n);
    }
}
int main()
{
    int n;
    cout << "Enter the size of an array:";
    cin >> n;
    int arr[n];
    cout << "Enter array elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}