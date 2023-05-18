#include <iostream>
#include <vector>

using namespace std;

bool isSorted(vector<int> nums, int x)
{
    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    bool result = isSorted({1, 2, 3, 4, 5}, 1);
    cout << result;
    return 0;
}