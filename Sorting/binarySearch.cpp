#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> nums, int target)
{
    int l, mid, h;
    sort(nums.begin(), nums.end());
    l = 0;
    h = nums.size() - 1;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int _ = binarySearch(nums, 9);
    cout << _;
}