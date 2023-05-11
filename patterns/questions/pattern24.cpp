#include <iostream>

using namespace std;

//! Love Baber video number 4

//! Pattern
//    1
//   121
//  12321
// 1234321

//? 1st Circle is the space

//? 2nd cirlce
//    1
//   12
//  123
// 1234

//? 3rd circle
// 
// 1
// 21
// 321


int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        // Print space (1st circle)
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // Print 2nd circle (j)
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // print 3rd circle
        //? 
        int start = i - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }

        cout << endl;
    }

    return 0;
}