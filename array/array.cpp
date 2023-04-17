#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> mySet;

    // Loop thorugh every element
    for (int num : nums)
    {
        // check is the element is already present in the unique set
        if (mySet.count(num) > 0)
        {
            return true;
        }

        // Also push element in the set
        mySet.insert(num);
    }
    return false;
}

// Input : s = "pop", t = "oop" Output : true
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
    vector<int> vec1 = {1, 3, 3};

    // cout << containsDuplicate(vec1);
                                          
    cout << isAnagram("pop", "oop");
    return 0;
}