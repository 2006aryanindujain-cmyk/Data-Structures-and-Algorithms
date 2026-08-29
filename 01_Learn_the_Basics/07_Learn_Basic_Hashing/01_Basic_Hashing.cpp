// Given an array of integers: [1, 2, 1, 3, 2] and we are given some queries: [1, 3, 4, 2, 10]. For each query,
// we need to find out how many times the number appears in the array. For example, if the query is 1 our answer
// would be 2, and if the query is 4 the answer will be 0.

// int f(number, a[])
// {
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == number)
//         {
//             cnt = cnt + 1;
//         }
//     }
// }
// The time complexity of the function will be O(N) ignoring the other constant operations.
// Now, for each query, we are calling this function. So, if the query contains 5 numbers and we call the function 5 times,
// the total time complexity will be O(5*N). If the number of queries is Q, the time complexity will be O(Q*N).
// Now, if the length of the query becomes large like 10^5 and the array size also becomes large like 10^5, the time complexity will be O(10^10).
// We know from our previous knowledge that 10^8 operations take 1 second to get executed. So, 10^10 operations will take around 100 seconds(10^10/10^8). We
// cannot say a code is good if it takes 100 seconds to get executed.

// In order to optimize this approach, we need to use hashing. If we say the definition of hashing in a naive way,
// it is nothing but the combination of the steps, pre-storing, and fetching.

// In simple terms, hashing is the combination of two fundamental steps:
// 1. Pre-storing (Pre-computation): Calculating and storing information (e.g., frequencies) in a data structure beforehand.
// 2. Fetching (Retrieval): Directly retrieving the stored result for each query without re-traversing the original dataset.

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size:";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the array elements:";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int hash[n + 1] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[15]] += 1;
//     }
//     int q;
//     cout << "Enter the number of queries:";
//     cin >> q;
//     while (q != 0)
//     {
//         cout << "Enter the query:";
//         int num;
//         cin >> num;
//         cout << "The " << num << " appears " << hash[num] << " time(s) in a given array." << endl;
//         q--;
//     }
//     return 0;
// }

// Array Size Limitations in C++ :-
// Inside main(): Max integer array size is ~ 10^6.
// Inside main(): Max boolean array size is ~ 10^7.
// Globally declared: Max integer array size is 10^7.
// Globally declared: Max boolean array size is 10^8.
// Limitation: If elements are as large as 10^9, declaring an array of size 10^9 + 1 is impossible due to memory limits.

// Character Hashing :-
// ->Characters are mapped to integer indices using their standard ASCII values (e.g., 'a' has an ASCII code of 97).
// ->Case 1: Lowercase Characters Only ('a' to 'z') :-
// i. Mapping Formula: index = char - 'a' (maps 'a' -> 0, 'b' -> 1, ..., 'z' -> 25).
// ii. Array Size: int hash[26] = {0};
// iii. Pre-storing & Fetching: hash[s[i] - 'a']++ and cout << hash[c - 'a'].
// Case 2: Case 2: Uppercase Characters Only ('A' to 'Z')
// i. Mapping Formula: index = char - 'A' (maps 'A' -> 0, 'B' -> 1, ..., 'Z' -> 25).
// ii. Array Size: int hash[26] = {0};
// Case 3: Both Lowercase & Uppercase (or All Characters)
// i. Total possible ASCII characters: $256$.
// ii. Mapping: Directly use the character as the index without subtracting anything.
// iii. Array Size: int hash[256] = {0};
// iv. Pre-storing & Fetching: hash[s[i]]++ and cout << hash[c].
// v.Case 3 can also safely be used for Case 1 and Case 2.

// int f(char c, , string s)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == c)
//         {
//             count = count + 1;
//         }
//     }
//     return count;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cout << "Enter the string:";
//     cin >> s;
//     int hash[25] = {0};
//     for (int i = 0; i < s.size(); i++)
//     {
//         hash[s[i] - 'a']++;
//     }
//     int q;
//     cout << "Enter the number of queries:";
//     cin >> q;
//     while (q--)
//     {
//         char c;
//         cout << "Enter the query:";
//         cin >> c;
//         cout << "The " << c << " appears " << hash[c - 'a'] << " time(s) in a given string." << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cout << "Enter the string:";
//     cin >> s;
//     int hash[256] = {0};
//     for (int i = 0; i < s.size(); i++)
//     {
//         hash[s[i]]++;
//     }
//     int q;
//     cout << "Enter the number of queries:";
//     cin >> q;
//     while (q--)
//     {
//         char c;
//         cout << "Enter the query:";
//         cin >> c;
//         cout << "The " << c << " appears " << hash[c] << " time(s) in a given string." << endl;
//     }
//     return 0;
// }

// To handle large values (like 10^9 or higher), dynamic key-value structures are used: std::map / std::unordered_map in C++ and HashMap in Java.
// Missing Keys: If a key does not exist, C++ map/unordered_map returns 0, while Java HashMap returns null.
// Always prefer unordered_map first due to O(1) average time. If unordered_map causes TLE(Time Limited Exceeded error) due to worst-case collisions on specific
// platform test cases, switch to map.

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size: ";
//     cin >> n;
//     int arr[n];
//     unordered_map<int, int> mp;
//     cout << "Enter the array elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         mp[arr[i]]++;
//     }
//     int q;
//     cout << "Enter the number of queries: ";
//     cin >> q;
//     while (q--)
//     {
//         int num;
//         cout << "Enter the query: ";
//         cin >> num;
//         cout << "The " << num << " appears " << mp[num] << " time(s) in the array." << endl;
//     }
//     for (auto it = mp.begin(); it != mp.end(); it++)
//     {
//         cout << it->first << " " << it->second << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cout << "Enter the string:";
//     cin >> s;
//     unordered_map<char, int> mp;
//     for (int i = 0; i < s.size(); i++)
//     {
//         mp[s[i]]++;
//     }
//     int q;
//     cout << "Enter the number of queries:";
//     cin >> q;
//     while (q--)
//     {
//         char c;
//         cout << "Enter the query:";
//         cin >> c;
//         cout << "The " << c << " appears " << mp[c] << " time(s) in a given string." << endl;
//     }
//     return 0;
// }

// map => stores all the elements in the sorted order of keys.
// unorderd_map => it does not follow any specified order.
// In map, total time complexity including storing and fetching is O(log(n)){for best and average and worst case}, where, N= number of elements.
// In unorderd_map, total time complexity including storing and fetching is O(1){for best and average case} and O(N){for worst case}, where,
// N=  number of elements.The time complexity in the worst case is O(N) because of the internal collision.

// Hashing is done using several methods. Among them, the three most common ones are :-
// 1. Division method
// 2. Folding method
// 3. Mid-Square method

// The Division Method :-
// Maps any integer key to an index within an allocated hash table size using modulo arithmetic : Hash Index = Key (mod M)
// Example (M = 10): Given array: [2, 5, 16, 28, 139]
//                                2 % 10 = 2 -> stored at index 2
//                                5 % 10 = 5 -> stored at index 5
//                                16 % 10 = 6 -> stored at index 6
//                                28 % 10 = 8 -> stored at index 8
//                                139 % 10 = 9 $\to$ stored at index 9

// Collisions and Linear Chaining :-
// A collision happens when two or more distinct array elements compute to the exact same hash index after applying the hash function.
// Example: For M = 10, numbers like 18, 28, 38, and 48 all give remainder 8.
// To resolve collisions, a Linked List (chain) is maintained at each index of the hash array.
// Instead of storing a single value, elements that map to the same index are added into that index's linked list chain in sorted order.
// To count an element's frequency, the program goes to index (number % 10) and traverses its specific chain.

// The Worst-Case Scenario of unordered_map :-
// If all N input elements map to the exact same hash index (e.g., [8, 18, 28, 38, ..., 1008] with M = 10), all elements end up inside a single linked list chain at index 8
// Fetching an element then requires traversing the entire N-length chain linearly, degrading search performance to O(N).