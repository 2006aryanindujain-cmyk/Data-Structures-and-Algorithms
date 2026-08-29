// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size of an array:";
//     cin >> n;
//     int arr[n];
//     unordered_map<int, int> um;
//     cout << "Enter the array elements:";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         um[arr[i]]++;
//     }
//     int max = um[arr[0]];
//     int j = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (max < um[arr[i]])
//         {
//             max = um[arr[i]];
//             j = i;
//         }
//     }
//     cout << "Highest occuring element in a given array is " << arr[j] << " which occur " << max << " time(s)." << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the total numnber of elements:";
    cin >> n;
    unordered_map<int, int> um;
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        um[m]++;
    }
    int max = 0;
    int j;
    for (auto it = um.begin(); it != um.end(); it++)
    {
        if (max < it->second)
        {
            max = it->second;
            j = it->first;
        }
    }
    cout << "Highest occuring element in a given array is " << j << " which occur " << max << " time(s)." << endl;
    return 0;
}