#include <iostream>
#include <vector>

using namespace std;

//! Reverse an Array
// 1,2,3,4,5,6 --> 6,5,4,3,2,1
// Okay so here we are swapping the last corresponding values, i is starting from first and j is staring from the last, and first element is equal to last element
// Lis this :-
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
        // Swap
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    return nums;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    vector<int> _ = reverseArray(nums);

    // Display
    cout << _[0] << endl
         << _[_.size() - 1];
    return 0;
}