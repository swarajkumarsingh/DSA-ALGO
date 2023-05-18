#include <iostream>
#include <vector>

using namespace std;

vector<int> leftShift(vector<int> nums)
{

    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            nums[i] = 0;
            return nums;
        }
        nums[i] = nums[i + 1];
    }

    return nums;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = leftShift(nums);

    // Display
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}