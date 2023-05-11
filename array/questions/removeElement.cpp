#include <iostream>
#include <vector>

using namespace std;

vector<int> removeElement(vector<int> nums, int ele)
{
    vector<int> newNums = {};

    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == ele){
            // remove element and copy it to newNums vector
        }
    }
    

    return newNums;
}

int main()
{
    removeElement({1, 2}, 2);
    return 0;
}