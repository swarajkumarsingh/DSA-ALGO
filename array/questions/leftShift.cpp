#include <iostream>
#include <vector>

using namespace std;

//! Left Shifting Array 
// 1,2,3,4 --> 2,3,4,0
// okay, so here nums[i] is equal to nums[i+1](the next element), and if i == size-1(last element in the array) then replace it with 0

vector<int> leftShift(vector<int> nums)
{
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        // Replace last element with 0
        if (i == size - 1)
        {
            nums[i] = 0;
            return nums;
        }

        // Change the values
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