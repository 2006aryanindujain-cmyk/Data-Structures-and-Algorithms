// In the iterative method, we did the following :-
// -> Take an element from the unsorted array(using an outer loop).
// -> Place it in its corresponding position in the sorted part(using an inner loop).
// -> Shift the remaining elements accordingly.

// In recursive method we will do the following :-
// -> First, call the recursive function with the given array, the size of the array, and the
//    index of the selected element(let's say i).
// Inside that recursive function, take the element at index i from the unsorted array.
// Then, place the element in its corresponding position in the sorted part(using swapping).
// After that, Shift the remaining elements accordingly.
// Finally, call the recursion increasing the index(i) by 1.
// The recursion will continue until the index reaches n(i.e. All the elements are covered). Base Case: if(i == n) return.

#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    for (int j = i; j > 0; j--)
    {
        if (arr[j] < arr[j - 1])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
        }
        else
        {
            break;
        }
    }
    insertion_sort(arr, n, i + 1);
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
    insertion_sort(arr, n, 0);
    cout << "Array elements in sorted manner:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

// Time Complexity: O(N^2), (where N = size of the array), for the worst, and average cases.
// Time Complexity: O(N^2), (where N = size of the array), for best case if there is no break.
// Time Complexity: O(N), (where N = size of the array), for best case if there is break.
// Space Complexity: O(N) auxiliary stack space (call stack).