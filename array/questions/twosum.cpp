#include <iostream>
#include <vector>

using namespace std;

// {1,2} target = 3 --> 0,1
// {1,2,4,5,6} target = 11 --> 3,4

vector<int> twoSum(vector<int> &nums, int target)
{
    // Loop through every element and it's surroundings
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            // ignore adding if i==j --> 0,0 --> 1,1 --> 2,2
            if (i == j) continue;

            // Check if nums[i] + nums[j] == target then return the indexes values
            if (nums[i] + nums[j] == target)
            {
                cout << i << j << endl;
                return {i, j};
            }
        }
    }
}

int main()
{
    vector<int> nums = {3, 2, 4};
    int target = 6;
    twoSum(nums, target);

    return 0;
}