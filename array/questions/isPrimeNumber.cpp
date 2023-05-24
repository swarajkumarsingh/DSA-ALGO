#include <iostream>

using namespace std;

// 1,2,3 --> true
// 1,2,3,4 --> false

int main()
{
    // 1 - n (sum of all prime numbers)
    // check is n is a prime number or not

    // % modulo operator -> gives us reminder

    int n;

    cin >> n;

    if (n == 2 || n % 2 != 0)
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "NOT Prime Number" << endl;
    }

    return 0;
}
