#include <iostream>

using namespace std;

// Love Babar lecture number 4

// Pattern
// *****
//  ****
//   ***
//    **
//     *

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // space print kro
        int space = i - 1;
        int star = n - i + 1; // from high to low
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // then * print karo based on i
        //? if this for loop would depend on i, it would go from low to high which is not in our case, we it from high to low, for that we use star(n-i+1)
        for (int j = 0; j < star; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}