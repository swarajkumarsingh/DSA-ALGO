#include <iostream>

using namespace std;

// Love Babar lecture number 4 

// Pattern
//     *
//    **
//   ***
//  ****
// *****

//? Here, we can first create space inside the i for loop, and then put star, so calculate the space, you can see it is depending on n and i, so the formula is int space = n - i;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int space = n - i;

        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}