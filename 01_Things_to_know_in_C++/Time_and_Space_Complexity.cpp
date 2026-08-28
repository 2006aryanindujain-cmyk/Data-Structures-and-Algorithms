// Time complexity measures how the runtime of an algorithm grows with input size.
// We will always calculate the time complexity for the worst-case scenario.
// Best case :- This term refers to the case where the code takes the least amount of time to get executed.
// Worst case :- This term refers to the case where the code takes the maximum amount of time to get executed.
// Average case :- This is basically the case between the best and the worst.

// TIME COMPLEXITY :- How fast the code runs as input size grows
// - O(1): Constant - always same time, no matter input size
// - O(n): Linear - time grows with input size
// - O(n^2): Quadratic - nested loops, time grows exponentially
// - O(log n): Logarithmic - divide and conquer approach
// - O(n log n): Common in sorting algorithms

// Avoid including the constant terms in time complexity.
// int x = 2;
// for (int i = 1; i <= N; i++)
// {
//     cout << "Aryan";
// }
// O(3N + 1) = > O(3N)

// Avoid the lower values in time complexity.
// O(3N) => O(N)

// Big O Notation :- Represents the worst-case time complexity, i.e., the upper bound.
// Theta Notation :- Represents the average-case time complexity.
// Omega-Notation :- Represents the best-case time complexity, i.e., the lower bound.

// Space complexity measures how much extra memory an algorithm uses.
// Space complexity generally represents the summation of auxillary space and the input space.
// Auxillary space refers to the space that we use additionally to solve a problem.
// Input space refers to the space that we use to store the inputs.
// We represent the space complexity using the Big-O notation.

// SPACE COMPLEXITY :- How much memory the code uses as input size grows
// - O(1): Constant - uses fixed memory
// - O(n): Linear - uses memory proportional to input
// - O(n^2): Quadratic - uses memory for 2D structures

// Input(a) => 1 input space
// Input(b) => 1 input space
// c = a+b
// c => 1 auxillary space
// O(3)
// If we use an array of size n, the space complexity will be O(n).

// Don't manipulate given input data(e.g.,b=a+b) even if it saves space complexity.

// Time-limit rule :-
// Servers run :- 10^8 operations per second.
// For time limit of x seconds :- Code's time complexity should be around O(X * 10^8).
// Example :- 2 second limit -> O(2 * 10^8), not O(10^16).

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
