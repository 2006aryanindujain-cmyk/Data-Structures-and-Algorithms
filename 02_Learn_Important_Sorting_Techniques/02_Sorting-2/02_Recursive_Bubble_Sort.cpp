// In the iterative method, we usually select a range(using a loop), and for each range, we
// repeatedly swap(using another loop) the adjacent elements(if arr[i] > arr[i+1]) until the
// maximum element in that range reaches the end.

// Algorithm :-
// Step-1 :- First, call the recursive function with the given array and the range of n(size of the array).
// Step-2 :- Inside that recursive function, repeatedly swap 2 adjacent elements if arr[j] > arr[j+1]. Here,
//           the maximum element of the unsorted array reaches the end of the unsorted array after each recursive call.
// Step-3 :- Each time after step 2, call the recursion again decreasing the range by 1.
// Step-4 :- The recursion will continue until the range(i.e. the size) of the array is reduced to 1.
//           Base Case: if(n == 1) return.

#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n)
{
    int did_swap = 1;
    if (n <= 1)
    {
        return;
    }
    for (int j = 0; j < n - 1; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            did_swap = 1;
        }
        if (did_swap == 0)
        {
            return;
        }
    }
    bubble_sort(arr, n - 1);
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
    bubble_sort(arr, n);
    cout << "Array elements in sorted manner:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

// Time Complexity: O(N^2), (where N = size of the array), for the worst, and average cases.
// Time Complexity: O(N), (where N = size of the array), for the best case.
// Space Complexity: O(N) auxiliary stack space (due to recursion stack).