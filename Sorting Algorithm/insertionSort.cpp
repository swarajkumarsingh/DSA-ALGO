#include <iostream>
#include <vector>

using namespace std;

vector<int> give(vector<int> arr, int n)
{
    for (int i = 1; i < i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }

        arr[j + 1] = temp;
    }

    return arr;
}

int main()
{
    vector<int> arr = {5, 2, 9, 4, 4, 3, 7, 7, 3};
    vector<int> res = give(arr, arr.size());
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}
