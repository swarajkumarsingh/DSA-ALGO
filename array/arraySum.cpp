#include <iostream>

using namespace std;

int main()
{
    // Add all number from 1 to n;

    int n, sum = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << sum;

    return 0;
}