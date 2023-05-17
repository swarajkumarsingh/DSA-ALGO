#include <iostream>
#include <vector>

using namespace std;

int findMax(vector<int> elements)
{
    int initValue = elements[0];

    for (int i = 0; i < elements.size(); i++)
    {
        cout << i + 1 << endl;
        if (elements[i] > initValue)
        {
            initValue = elements[i];
        }
    }
    return initValue;
}

int main()
{
    vector<int> elements = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9};
    int _ = findMax(elements);
    cout << _;
    return 0;
}