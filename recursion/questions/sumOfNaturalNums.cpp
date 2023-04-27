#include <iostream>

using namespace std;

//! Sum of first 'n' natural numbers (1-n) not 0;
//! Time complexity - O(n)

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return sum(n - 1) + n;
}

//! Using for loop

int sum2(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    cout << sum(4);
    return 0;
}