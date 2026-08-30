// Algorithm :-
// Step-1 :- First, we will select the range of the unsorted array using a loop (say i) that indicates
// the starting index of the range. The loop will run forward from 0 to n-1. The value i = 0 means the
// range is from 0 to n-1, and similarly, i = 1 means the range is from 1 to n-1, and so on. (Initially,
// the range will be the whole array starting from the first index).
// Step-2 :- Now, in each iteration, we will select the minimum element from the range of the unsorted array using an inner loop.
// Step-3 :- After that, we will swap the minimum element with the first element of the selected range(in step 1).
// Step-4 :- Finally, after each iteration, we will find that the array is sorted up to the first index of the range.

#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int n;
    cout << "Enter the array size:";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selection_sort(arr, n);
    cout << "The sorted array is:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Time Complexity:O(N^2),Selection sort runs in O(N²) time in the best, average, and worst
// cases due to its nested loop structure. It makes approximately N(N-1)/2 comparisons, regardless of the array's
// initial state. Even if no swaps are needed (best case), the number of comparisons remains the same.

// Space Complexity: O(1) {No extra space used}.