// The core idea behind Quicksort lies in partitioning the array around a pivot element such
// that all elements smaller than the pivot lie to its left and all greater elements lie to its
// right. This positioning ensures that the pivot is in its correct sorted place. By doing this
// for each recursive call, the problem is broken down into smaller subproblems where each side
// of the pivot can be independently sorted. This divide-and-conquer strategy allows Quicksort
// to sort parts of the array separately.

// Algorithm :-
// -> Select a pivot element from the array (commonly the last element, but can be first, middle, or random).
// -> Rearrange the elements in the array such that all elements smaller than the pivot are placed before it
//    and all greater elements are placed after it (this step is called partitioning).
// -> After partitioning, the pivot is in its correct sorted position.
// -> Recursively apply the same process to the subarrays on the left and right of the pivot.
// -> Base condition for recursion is when the subarray has zero or one element, as it's already sorted.
// -> Combine the results of the recursive calls to obtain the fully sorted array.

#include <bits/stdc++.h>
using namespace std;
int pivot(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[low]);
    return j;
}
void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int partition_index = pivot(arr, low, high);
        quick_sort(arr, low, partition_index - 1);
        quick_sort(arr, partition_index + 1, high);
    }
}
int main()
{
    int n;
    cout << "Enter the size of an array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in an array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quick_sort(arr, 0, n - 1);
    cout << "Array elements in sorted manner:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

// Time Complexity: O(N*logN), At each step, we divide the whole array, for that we take logN time
//                  and n steps are taken for the partitioning. In worst case i.e. when our pivot is
//                  always the greatest or the smallest element of the array, the time complexity can be O(N^2).
// Space Complexity: O(N), auxiliary stack space. It is for worst case.
//                   O(log(N)), auxiliary stack space. It is for best and average case.