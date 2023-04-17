#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

bool isAnagram(string s, string t)
{
    // if length is not equal return false
    if (s.length() != t.length())
    {
        return false;
    }

    // sort both the strings
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    // compare both the strings
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    cout << isAnagram("pop", "oop");
    return 0;
}