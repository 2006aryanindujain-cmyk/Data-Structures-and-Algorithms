// Algorithm :-
// Step-1 :- In each iteration, select an element from the unsorted part of the array using an outer loop.
// Step-2 :- Place this selected element in its correct position within the sorted part of the array.
// Step-3 :- Use an inner loop to shift the remaining elements, if necessary, to accommodate the selected
//           element. This involves shifting elements by one position until the selected element can be placed
//           in the correct position.
// Step-4 :- Continue this process until the entire array is sorted.

#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j - 1] > arr[j])
            {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
            else
            {
                break;
            }
        }
    }
}
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
    insertion_sort(arr, n);
    cout << "Sorted array elements:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// Time Complexity: O(n^2), where n is the number of elements in the array. This is because,
//                  in the worst case, we may have to compare each element with all the previous elements.
//                  This is for the average and worst case.

// Space Complexity: O(1), as we are sorting the array in place and not using any additional data structures that grow with input size.

// Time Complexity: O(n^2), where n is the number of elements in the array. This is for the best case.