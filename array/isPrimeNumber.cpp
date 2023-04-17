#include <iostream>

using namespace std;

int main()
{
    // 1 - n (sum of all prime numbers)
    // check is n is a prime number or not

    // % modulo operator -> gives us reminder

    int n, sum = 0;

    cin >> n;

    if (n == 2 || n % 2 != 0)
    {
        cout << "Prime Number" << endl;
    } else
    {
        cout << "NOT Prime Number" << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        if (n == 2 || i % 2 != 0)
        {
            sum = sum + i;
        }
    }

    cout << "The Sum of all prime numbers are " << sum;

    return 0;
}
