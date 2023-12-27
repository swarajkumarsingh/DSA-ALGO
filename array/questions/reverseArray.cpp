#include <iostream>
#include <vector>

using namespace std;

//! Reverse an Array
// 1,2,3,4,5,6 --> 6,5,4,3,2,1
// Okay so here we are swapping the last corresponding values, i is starting from first and j is staring from the last, and first element is equal to last element
// Like this :-
// We are swapping the first and last elements
// 1 2 3 4          1 2 3 4
// |     |            | |
// |     |            | |
// |-----|            |-|

vector<int> reverseArray(vector<int> nums)
{
    int temp;
    for (int i = 0, j = nums.size() - 1; i < j; i++, j--)
    {
        cout << " " << j;

        // Swap
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    return nums;
}

vector<int> reverseArray1(vector<int> nums)
{
    for (int start = 0; start < nums.size(); start++)
    {
        // "end"  = start - 1 coz "start" is starting from 0
        int end = nums.size() - start - 1;

        // Swap based on a condition
        if (start < end)
        {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
        }
    }

    return nums;
}

vector<int> reverseArray2(vector<int> nums)
{
    int s = 0;
    int e = nums.size() - 1;

    while (s<=e)
    {
        swap(nums[s], nums[e]);
        s++;
        end--;
    }

    return nums;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> result = reverseArray1(nums);

    // Display
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
