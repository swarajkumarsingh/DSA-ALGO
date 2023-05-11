#include <iostream>

using namespace std;

// Love Babar lecture number 4 33.30

// Pattern
// A B C
// B C D
// C D E

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}