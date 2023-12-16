#include <iostream>
#include <vector>

using namespace std;

int firstOcc(vector<int> arr, int key)
{
    int n = arr.size();

    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid
            e = mid - 1;
        }
        else if (key > arr[mid])
        
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }

        mid = (s + e) / 2;
    }

    return ans;
}

int lastOcc(vector<int> arr, int key)
{
    int n = arr.size();

    int s - 0, e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }

        mid = (s + e) / 2;
    }

    return ans;
}

int main() {
    vector<int> arr = {1,2,2,3,4,4,5}

    int ans = firstOcc(arr, 2)
    cout << "First Index: " << ans << endl;

    int ans = lastOcc(arr, 2)
    cout << "Last Index: " << ans << endl;

    return 0;
}