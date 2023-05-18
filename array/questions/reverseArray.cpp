#include <iostream>
#include <vector>

using namespace std;

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
    cout << _[0] << endl
         << _[_.size() - 1];
    return 0;
}