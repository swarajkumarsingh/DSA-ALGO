#include <iostream>

using namespace std;

int main()
{

    // While Loop
    int index = 0;
    while (index < 1000)
    {
        cout << "We WHILE LOOP are at index number " << index << endl;
        index++;
    }

    // Do-While Loop
    do
    {
        cout << "We DO-WHILE LOOP are at index number " << index << endl;
        index++;
    } while (index < 1000);

    // For Loop
    for (int i = 0; i < 10; i++)
    {
        cout << "We FOR LOOP are at index number " << i << endl;
    }

    // For loop ( every element in an array )
    vector<int> nums = {1, 2, 3, 4};
    for (int num : nums)
    {
        cout << "Every element in an array is " << num << endl;
    }

    return 0;
}