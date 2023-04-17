#include <iostream>

using namespace std;

int main()
{

    //! Arrays
    //? data_type name[array_size] = {sample_values1,sample_values2,sample_values3};
    //? int arr[3] = {1,2,3};

    //! Initialized array of size 3
    // int arr3[3];

    int arr[3] = {1, 2, 3};
    cout << arr[2] << endl;

    //! One dimensional Array

    int marks[6];

    // Suppy value to the array
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << "Enter the marks of " << i << "th student" << endl;
    //     cin >> marks[i];
    // }

    // // Get values from array
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << "Marks of " << i << "th student" << endl;
    // }

    //! Two dimensional Array
    // data_type name[row][column] = {
    //     {colum value}, --> row
    //     {colum value} --> row
    // }

    // Example:
    // int arr2d[2][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    // };

    int arr2d[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };

    //! Accessing value from 2d array
    //? STEP 1: for loop for row (i)
    //? STEP 2: for loop for column (j)
    //? STEP 3: arr2d[i][j], now GET/PUT values in the 2d array

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "The value at " << i << "," << j << " is " << arr2d[i][j] << endl;
        }
    }

    return 0;
}

//! Drawbacks of arrays
//? Not re-sizable - fixed length should be given and later cant change it also
