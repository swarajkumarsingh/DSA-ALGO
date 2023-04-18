#include <iostream>

using namespace std;

// Love Babar lecture number 4

// Pattern
// *****
// ****
// ***
// **
// *

//? Here the star is depending on (n & i), as the stars(n) are going down, it is decreasing by i, so the j for loop will depend of star, and it will give us the answer

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int star = n - i + 1;
        for (int j = 0; j < star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}