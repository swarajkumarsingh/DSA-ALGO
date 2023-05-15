#include <iostream>
#include <vector>

using namespace std;

// Top ways to optimize linearSearch
// 1. Transposition: moving the recent found element one index forwad, so that next time for loop will find it one step ahead.
// 2. Move to First/Head: here we move the recent found element to starting of the array, so that next time it is found at index 1.

int linearSearch(vector<int> nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 5;
    int foundIndex = linearSearch(nums, target);
    cout << foundIndex << endl;
    return 0;
}