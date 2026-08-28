// Used to repeat a block of code as long as a given condition is true. Used when the number of iterations is not known in advance.
// do-while loop is similar to while loop, but the code block executes at least once before checking the condition(condition
// checked after the execution).

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "While Loop Example:" << endl;
    int i = 1;
    while (i <= 5)
    {
        cout << "i = " << i << endl;
        i++;
    }
    cout << "\nDo-While Loop Example:" << endl;
    int j = 1;
    do
    {
        cout << "j = " << j << endl;
        j++;
    } while (j <= 5);
    return 0;
}
