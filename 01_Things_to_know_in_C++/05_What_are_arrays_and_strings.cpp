// Arrays and strings in C++

// An array is a fixed-size collection of elements of the same type.
// Example: int numbers[5]; declares an array of 5 integers.
// The size of the array is fixed at compile time, and elements are
// accessed using an index starting from 0, e.g. numbers[0].

// A string in C++ can be represented using a C-style character array
// or the std::string class from the standard library.
// C-style string example: char name[] = "Alice"; is an array of chars
// terminated by a null character '\0'.
// std::string example: std::string text = "Hello"; is easier to use
// and supports many string operations like concatenation and length.

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