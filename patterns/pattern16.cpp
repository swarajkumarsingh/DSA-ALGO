#include <iostream>

using namespace std;

// Love Babar lecture number 4 33.30

// Pattern
// A
// B C
// C D E
// D E F G

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char value = 'A' + i + j - 2;
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}