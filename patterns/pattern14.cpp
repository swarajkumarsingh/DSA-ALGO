#include <iostream>

using namespace std;

// Love Babar lecture number 4 33.30

// Pattern
// A
// B B
// C C C

int main()
{
    int n;
    cin >> n;
    char ch = 'A';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch = ch + 1;
        cout << endl;
    }
    return 0;
}

int main2()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // A + 1 - 1 --> A
            // A + 2 - 1 --> B
            char ch = ('A' + i - 1);
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}