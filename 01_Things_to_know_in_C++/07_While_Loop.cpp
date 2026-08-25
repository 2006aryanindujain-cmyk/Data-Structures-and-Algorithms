#include <iostream>
using namespace std;
int main()
{
    // While Loop Example
    cout << "While Loop Example:" << endl;
    int i = 1;
    while (i <= 5)
    {
        cout << "i = " << i << endl;
        i++;
    }
    cout << "\nDo-While Loop Example:" << endl;
    // Do-While Loop Example
    int j = 1;
    do
    {
        cout << "j = " << j << endl;
        j++;
    } while (j <= 5);
    return 0;
}
