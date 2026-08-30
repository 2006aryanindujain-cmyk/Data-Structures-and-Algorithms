// Merge Sort is a classic divide and conquer algorithm. The core idea is based on breaking down a big problem
// into smaller, manageable sub-problems i.e. sorting smaller arrays and then merging those solutions to get the
// final sorted result.

// It is much easier to merge two sorted arrays than to sort a large unsorted one. Therefore, instead of trying to
// sort the entire array at once, Merge Sort breaks it into halves repeatedly until we reach arrays of size 1 (which
// are trivially sorted), and then merges them back in sorted order. This makes the algorithm efficient and predictable,
// especially for large datasets.

// Merge Sort Algorithm :-
// Step-1 :- If the array has only one or zero elements, it is already sorted, so we return it as is.
// Step-2 :- Else, we divide the array into two halves by finding the middle index.
// Step-3 :- We then apply the merge sort algorithm recursively on each of the two halves to sort them individually.
// Step-4 :- Once we have two sorted halves, we need to merge them into a single sorted array.
// Step-5 :- To merge, we compare elements from both halves one by one and place the smaller element into a new array,
//           continuing this until all elements from both halves are used.
// Step-6 :- This process is repeated at every level of recursion, and finally, we get one fully sorted array after all
//           merges are complete.

#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int low, int mid, int high)
{
    vector<int> v;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            v.push_back(arr[left]);
            left++;
        }
        else
        {
            v.push_back(arr[right]);
            right++;
        }
    }
    while (right <= high)
    {
        v.push_back(arr[right]);
        right++;
    }
    while (left <= mid)
    {
        v.push_back(arr[left]);
        left++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = v[i - low];
    }
}
void merge_sort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
int main()
{
    int n;
    cout << "Enter the size of an array:";
    cin >> n;
    int arr[n];
    cout << "Enter the array elemnts:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    merge_sort(arr, 0, n - 1);
    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// for (int i = low; i <= high; i++)
//     {
//         arr[i] = v[i - low];
//     }
// We do temp[i - low] while merging because temp always starts from 0 while the original array doesn't.
// For example:
// arr = [3, 8, 9, 12, 21, 17]
// Now let's focus on last two values i.e., 21 and 17. When we call merge on these two values, the low is 4 and high is 5. The
// temp array contains our sorted values = [17, 21] whose index starts from 0 but the index of values 21 and 17 in our original
// array is 4 and 5.
// Now in order to solve this issue, we do:
// low = 5;
// high = 6;
// arr[i] = temp[i - low]
// arr[5] = temp[5 - 5]    Place 0th index value of temp array, at the 5th index of our original array
// arr[6] = temp[6 - 5]    Place 1st index value of temp array, at the 6th index of our original array

// Time Complexity :- O(N*log(N)), merging two arrays take linear time and array is recursively divided into halves (log(N) times). It is for
// best, average and worst case.
// Space Complexity :- O(N), we use a temporary array to store elements in sorted order. It is for best, average and worst case.