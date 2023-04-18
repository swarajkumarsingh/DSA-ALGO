#include <iostream>

using namespace std;

// Pattern
//    1
//   22
//  333
// 4444

//? Here the space depends on n and i, and it is decreaing so (int space = n - i;), and then the flow of the stars is low to high, so the second for loop will depend on i, and the answer is solved

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // Space print karo
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // Number print karo
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }

        cout << endl;
    }

    return 0;
}