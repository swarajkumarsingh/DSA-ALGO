#include <iostream>

using namespace std;

int main()
{
    // 1 - n (sum of all even numbers)

    // % modulo operator -> gives us reminder

    int n, sum = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }

    cout << sum;

    return 0;
}