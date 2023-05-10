#include <iostream>

using namespace std;

// Pattern
// A
// A A
// B B B
// C C C C

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char ch = 'A' + i - 1;
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}