#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

// Steps
//? > Here we are using unordered_set, coz we will use o(n) (single for loop) so we need a list which does not contain duplicated values
// 1. Loop thorugh every element for(int num: nums) {...}
// 2. check is the element is already present in the unique set
// 3. Also push element in the set
// 4. repeat the process

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

int main()
{
    vector<int> vec1 = {1, 3, 3};

    cout << containsDuplicate(vec1);
    return 0;
}