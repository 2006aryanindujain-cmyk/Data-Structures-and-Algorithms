// Algorithm :-
// Step-1 :- Select the range of the unsorted array: Use an outer loop (i) that runs backward from n-1
//                                                   to 0 (where n is the size of the array). The value
//                                                   i = n-1 means the range is from 0 to n-1, i = n-2
//                                                   means the range is from 0 to n-2, and so on.
// Step-2 :- Push the maximum element to the end of the selected range: Use an inner loop (j) that runs from 0 to i-1.
//                                                                      Compare adjacent elements and swap them if
//                                                                      arr[j] > arr[j+1]. Repeating this process ensures
//                                                                      the maximum element in the current range moves to index i.
// Step-3 :- Progressively sort the array: After each outer loop iteration, the last part of the array becomes sorted.
//           For example :- After the first iteration, the element at the last index is sorted.
//                          After the second iteration, the last two elements are sorted.
//                          This continues until the entire array is sorted.
// Step-4 :- Complete sorting: After n-1 iterations, the whole array will be sorted.

#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n)
{
    int did_swap = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                did_swap = 1;
            }
        }
        if (did_swap == 0)
        {
            break;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the size of an array:";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr, n);
    cout << "The sorted array is:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// Time Complexity :- O(N^2), (where N = size of the array), for the worst, and average cases.
// Time Complexity :- O(N), (where N = size of the array), for the best case.
// Space Complexity :- O(1).

// Optimized approach :-
// -> The best case occurs if the given array is already sorted. We can reduce the time complexity to O(N) by
//    just adding a small check inside the loops.
// -> We will check in the first iteration if any swap is taking place. If the array is already sorted no swap
//    will occur and we will break out from the loops.
// -> Thus the iteration of the outer loop will be just 1. And our overall time complexity will be O(N).