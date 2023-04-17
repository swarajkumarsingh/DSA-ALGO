#include <iostream>

using namespace std;

// Reverse Pattern (i - j + 1)
// 1
// 2 1
// 3 2 1
// 4 3 2 1

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1;
        }
        cout << endl;
    }
    return 0;
}