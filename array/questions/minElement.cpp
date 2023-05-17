#include <iostream>
#include <vector>

using namespace std;

/*
maxElement: find the maxElement with a single loop, here we took a inital value which is the first number of the elements given,
 and then loop thourgh the elements list,
 if the element[i] is lesser than initalValue then, let the initial value be element[i] and loop repeats
*/

int findMax(vector<int> elements)
{
    int initValue = elements[0];

    for (int i = 0; i < elements.size(); i++)
    {
        if (elements[i] < initValue)
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