// Given two strings s and t, determine if they are isomorphic.
// Two strings s and t are isomorphic if the characters in s can be replaced to get t.
// All occurrences of a character must be replaced with another character while preserving the
// order of characters. No two characters may map to the same character, but a character may map to itself.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter the first string:";
    cin >> s;
    string p;
    cout << "Enter the second string:";
    cin >> p;
    multimap<char, char> mm;
    if(s.size() != p.size())
    {
        cout<<"Both strings are not isomorphic.";
        return false;
    }
    for(int i=0;i<s.size();i++)
    {
        mm.insert({s[i],p[i]});
    }
}