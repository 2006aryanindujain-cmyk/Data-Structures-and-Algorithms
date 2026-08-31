// An array is a linear data structure in which we store data and perform any operation, we can randomly access
// data in an array(with the help of it index value).
// An array is a collection of similar type of elements(homogeneous elements) that have contiguous memory location, i.e., one after another.
// Arrays store the related information in adjacent memory blocks.
// Syntax of array :- datatype arrayName[arraySize];
// In arrays, memory is allocated instantly.
// In array, insertion at end takes constant time O(1).
// In array , removing at end takes constant time O(1).

// Strings are like a series of characters stored in a specified order. Each character in a string is assigned an index,
// starting from 0. This means the first character is at index 0, the second character at index 1 and so on.
// Strings are terminated by a null character '\0'.

// code to find length of a string
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cout << "enter a string: ";
//     getline(cin, s);
//     cout << endl;
//     int length = 0;
//     while (s[length] != 0)
//     {
//         length++;
//     }
//     cout << "The length of a string is: " << length << endl;
//     return 0;
// }

// code for accessing individual characters of a string
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cout << "enter a string: ";
//     getline(cin, s);
//     cout << endl;
//     int length =0;
//     while(s[length]!=0)
//     {
//         cout<<s[length]<<" ";
//         length++;
//     }
//     return 0;
// }

// code for passing, returning and assigning strings
// #include <bits/stdc++.h>
// using namespace std;
// string fun(string &s)
// {
//     string p;
//     cout<<"Want to change previous string: ";
//     getline(cin,p);
//     s=p;
//     return s;
// }
// int main()
// {
//     string s;
//     cout << "enter a string: ";
//     getline(cin, s);
//     cout << endl;
//     fun(s);
//     cout<<"new modified string: "<<s<<endl;
//     return 0;
// }

// Code for string comparison
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cout << "enter a first string: ";
//     getline(cin, s);
//     cout << endl;
//     string p;
//     cout << "enter a second string: ";
//     getline(cin, p);
//     cout << endl;
//     if (s == p)
//     {
//         cout << "both strings are equal" << endl;
//     }
//     else if (s > p)
//     {
//         cout << s << " is greater than " << p << " string" << endl;
//     }
//     else
//     {
//         cout << p << " is greater than " << s << " string" << endl;
//     }
//     return 0;
// }