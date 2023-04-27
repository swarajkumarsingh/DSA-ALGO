#include <iostream>

using namespace std;

// n! = 1*2*3*4*5....*n
// 3! = 1*2*3 = 6

// fact(n) = 1*2*3*4*5(n-1)*n

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return factorial(n - 1) * n;
    }
}

int factorial2(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int f = 0;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    cout << factorial(11) << endl;
    cout << factorial2(11) << endl;
    return 0;
}