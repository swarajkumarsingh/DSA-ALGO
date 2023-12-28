#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(vector<int> arr1, int n, vector<int> arr2, int m)
{
    vector<int> arr3 = {};
    int k = 0;
    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    // copy the remaining elements from arr1 if present
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    // copy second element remaining elements if present
    while (j < m)
    {
        arr2[k] = arr2[j++];
    }

    return arr3;
}

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {6, 7, 8, 9};

    vector<int> arr3 = merge(arr1, arr1.size(), arr2, arr2.size());
    print(arr3);
}