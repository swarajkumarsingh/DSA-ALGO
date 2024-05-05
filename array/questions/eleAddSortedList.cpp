#include <iostream>
#include <vector>

using namespace std;

vector<int> addElementInSortedList(vector<int> nums, int x)
{
    int i = nums.size() - 1;
    // 8 > 7
    while (nums[i] > x)
    {
        nums[i + 1] = nums[i];
        i--;
    }
    nums[i + 1] = x;

    return nums;
}

vector<int> addElementInSortedList1()
{
    vector<int> A = {1, 2, 3, 4, 5, 6, 8, 9, 10};
    int x = 7;
    int i = A.size() - 1;

    // make space for 'x' element
    while (A[i] > x)
    {
        A[i + 1] = A[i];
        i--;
    }

    // add the 'x' element in the empty space
    A[i + 1] = x;

    // Display
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
}

int main()
{
    addElementInSortedList1();
    return 0;
}