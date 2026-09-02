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
    int i = 0;
    int max = arr[0];
    while (i < n)
    {
        if (arr[i] > arr[max])
        {
            max = i;
        }
        i++;
    }
    cout << "The largest element in a given array is " << arr[max];
    return 0;
}