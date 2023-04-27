#include <iostream>

using namespace std;

//! Sum of first 'n' natural numbers (1-n) not 0;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return sum(n - 1) + n;
}

int main()
{
    cout << sum(4);
    return 0;
}