#include <iostream>

using namespace std;

// Pattern
//       1
//     2 3
//   4 5 6
// 7 8 9 10

int main()
{

    // make counter variable
    int n, counter = 1;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // print space
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // print counter variable and increment its value
        for (int j = 1; j <= i; j++)
        {
            cout << counter;
            counter = counter + 1;
        }

        cout << endl;
    }

    return 0;
}