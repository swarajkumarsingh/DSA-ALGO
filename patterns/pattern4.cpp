#include <iostream>

using namespace std;

// Normal Pattern
// 4321
// 4321
// 4321
// 4321

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            //! Reverse the number from 123 --> 321
            // 3 - 1 + 1
            cout << n - j + 1;
        }
        cout << endl;
    }

    return 0;
}