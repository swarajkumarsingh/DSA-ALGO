#include <iostream>

using namespace std;

bool containsDuplicate()
{
    unordered_set<int> mySet;
    for (int num : nums)
    {
        if (mySet.count(num) > 0)
        {
            return true;
        }
        mySet.insert(num);
    }
    return false;
}

int main()
{
    vector<int> vect1 = {1, 3, 4, 4};

    bool result = containsDuplicate(vect1);
    cout << result;

    return 0;
}