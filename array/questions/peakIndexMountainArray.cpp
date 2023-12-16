#include <iostream>
#include <vector>

using namespace std;

int peakIndexInMountainArray(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = (s + e) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }

    return s;
}

int main()
{
    vector<int> arr = {0, 1, 0};
    int res = peakIndexInMountainArray(arr);
    cout << "Mid value: " << res;

    return 0;
}