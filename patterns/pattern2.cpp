#include <iostream>

using namespace std;

// Normal Pattern
// 1111
// 2222
// 3333
// 4444

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}