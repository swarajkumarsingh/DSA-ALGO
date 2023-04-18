#include <iostream>

using namespace std;

// Love Babar lecture number 4 33.30

// Pattern
// A
// B C
// D E F

int main()
{
    int n;
    cin >> n;
    char value = 'A';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << value;
            value = value + 1;
        }
        cout << endl;
    }
    return 0;
}