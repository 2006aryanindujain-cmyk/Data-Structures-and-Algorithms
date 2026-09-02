// Second Largest Element in a given array :-

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size of an array:";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the array elements:";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int max = arr[0];
//     int second_largest = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             second_largest = max;
//             max = arr[i];
//         }
//         else if (arr[i] < max && arr[i] > second_largest)
//         {
//             second_largest = arr[i];
//         }
//     }
//     cout << "The second largest element in a given array is " << second_largest;
//     return 0;
// }

// Second Smallest Element in a given array :-

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of an array:";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int smallest = arr[0];
    int second_smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < second_smallest)
        {
            second_smallest = arr[i];
        }
    }
    cout << "The second smallest element in a given array is " << second_smallest;
    return 0;
}
