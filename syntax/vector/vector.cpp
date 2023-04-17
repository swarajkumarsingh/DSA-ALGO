#include <iostream>
#include <vector>

using namespace std;

//! Drawbacks of arrays
//? Not re-sizable - fixed length should be given and later cant change it also

//! Advantages of vectors
//? Dynamic length - can be changed

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
    int vectorSize = 3;

    // Take vector size from the user, and iterate for that many times
    cout << "Enter the values of vector" << endl;
    cin >> vectorSize;

    // Adding values to vector ~ vec1.push_back(value)
    for (int i = 0; i < vectorSize; i++)
    {
        int element;
        cin >> element;
        vec1.push_back(element);
    }

    // Function calling
    display(vec1);

    return 0;
}
