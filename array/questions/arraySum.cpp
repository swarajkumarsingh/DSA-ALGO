#include <iostream>
#include <vector>

using namespace std;

// Add all number from in the array

int sum(vector<int> nums)
{
    int value = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        value = value + nums[i];
    }
    return value;
}

int main()
{
    vector<int> nums = {1, 2};
    int _ = sum(nums);

    cout << _;

    return 0;
}