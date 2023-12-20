//! Bubble sort an array

#include <iostream>
#include <vector>

using namespace std;

vector<int> bubbleSort(vector<int> arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    return arr;
}

vector<int> bubbleSortNotOptimized(vector<int> arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        // running j, for no use, no this is not optimized
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    return arr;
}

int main()
{
    vector<int> arr = {10, 3, 5, 1, 7, 5};
    vector<int> result = bubbleSort(arr, arr.size());

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}