// TIME COMPLEXITY: How fast the code runs as input size grows
// - O(1): Constant - always same time, no matter input size
// - O(n): Linear - time grows with input size
// - O(n^2): Quadratic - nested loops, time grows exponentially
// - O(log n): Logarithmic - divide and conquer approach
// - O(n log n): Common in sorting algorithms

// SPACE COMPLEXITY: How much memory the code uses as input size grows
// - O(1): Constant - uses fixed memory
// - O(n): Linear - uses memory proportional to input
// - O(n^2): Quadratic - uses memory for 2D structures

// Simple C++ examples using only loops
#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    // Outer loop runs n times, inner loop also runs n times for each outer iteration
    // Time Complexity: O(n * n) = O(n^2)  -> total iterations = n * n
    // Space Complexity: O(1) -> no array/vector used, just loop variables i and j
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}