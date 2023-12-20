//! sort the given array in ascending order, using selection sort method!

#include <iostream>
#include <vector>

using namespace std;

vector<int> sortArray(vector<int> arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                // swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

int main()
{
    vector<int> arr = {92, 83, 12, 1, 3};
    vector<int> a = sortArray(arr, arr.size());
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}