#include <iostream>
#include <vector>

using namespace std;

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