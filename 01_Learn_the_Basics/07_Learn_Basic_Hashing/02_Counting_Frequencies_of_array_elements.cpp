// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size of an array:";
//     cin >> n;
//     int arr[n];
//     unordered_map<int, int> um;
//     cout << "Enter array elements:";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         um[arr[i]]++;
//     }
//     int q;
//     cout << "Enter the number of queries:";
//     cin >> q;
//     while (q--)
//     {
//         int num;
//         cout << "Enter the query:";
//         cin >> num;
//         cout << "The frequency of given query in a given array is " << um[num] << " times(s)" << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the total number of elements:";
    cin >> n;
    unordered_map<int, int> um;
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        um[j]++;
    }
    int q;
    cout << "Enter the number of queries:";
    cin >> q;
    while (q--)
    {
        int num;
        cout << "Enter the query:";
        cin >> num;
        cout << "The frequency of given query in a given array is " << um[num] << " times(s)" << endl;
    }
    return 0;
}