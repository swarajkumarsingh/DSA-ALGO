#include <iostream>

using namespace std;

//! Pattern
// 1234512345
// 1234**1234
// 123****123
// 12******12
// 1********1

//? 1st Part
// 12345
// 1234
// 123
// 12
// 1

//? 2nd Part
// 
//    **
//   **** 
//  ******
// ********

//? 3rd Part
// 54321
//  4321
//   321
//    21
//     1

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        // print (1st triangle)
        int star = n - i + 1;
        for (int j = 1; j <= star; j++)
        {
            cout << j;
        }

        // print 2nd triangle
        int start = i + i - 2;
        while (start)
        {
            cout << "*";
            start = start - 1;
        }

        // print 3nd triangle
        int count = n - i + 1;
        while (count)
        {
            cout << count;
            count = count - 1;
        }

        cout << endl;
    }

    return 0;
}