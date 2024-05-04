//! Find the pivot number in the array using Binary Search - 0(Log n)
//? {5, 8, 10, 17, 1, 3} ~ pivot number - 1 

#include <iostream>
#include <vector>

using namespace std;

int getPivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = (start + end) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {1
            end = mid;
        }

        mid = (start + end) / 2;
    }

    return s;
}

int getPivot2(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = 0;

    while (s < e)
    {
        if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1])
        {
            ans = arr[mid + 2];
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr = {7, 9, 1, 2, 3};
    int res = getPivot(arr);
    cout << "Min value: " << res;
}