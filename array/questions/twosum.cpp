#include <iostream>
#include <vector>

using namespace std;

void twoSum(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {

            if (i == j)
            {
                continue;
            }

            if (nums[i] + nums[j] == target)
            {
                cout << i << j << endl;
                // return {i, j};
                return;
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