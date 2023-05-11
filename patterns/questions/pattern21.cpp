#include <iostream>

using namespace std;

// Pattern
//  1111
//   222
//    33
//     4

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // space
        int space = i - 1;
        int star = n - i + 1;

        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // print number
        for (int j = 0; j < star; j++)
        {
            cout << i;
        }

        cout << endl;
    }

    return 0;
}