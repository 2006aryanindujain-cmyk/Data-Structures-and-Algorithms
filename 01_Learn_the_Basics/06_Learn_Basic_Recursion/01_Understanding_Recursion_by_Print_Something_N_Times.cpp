// Recursion is a programming technique where a function calls itself directly or indirectly to solve a problem,
// by breaking it down into smaller subproblems until it reaches a base case that stops further calls.

// If there is no condition to stop the recursive calls, the calls will run indefinitely until the stack runs out of
// memory (stack overflow ).

// Whenever recursion calls are executed, they’re simultaneously stored in a recursion stack where they wait for the completion
// of the recursive function. A recursive function can only be completed if a base condition is fulfilled and the control returns
// to the parent function.

// But, when there is no base condition given for a particular recursive function, it gets called indefinitely which results in a
// Stack Overflow i.e, exceeding the memory limit of the recursion stack and hence the program terminates giving a Segmentation
// Fault error.

// Base condition is the condition that is written in a recursive function in order for it to get completed and not to run
// infinitely. After encountering the base condition, the function terminates and returns back to its parent function simultaneously.

#include <bits/stdc++.h>
using namespace std;
void print(int count)
{
    if (count == 5)
    {
        return;
    }
    cout << 1 << endl;
    count++;
    print(count);
}
int main()
{
    int count = 0;
    print(count);
    return 0;
}