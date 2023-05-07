#include <iostream>

using namespace std;

int func(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return func(n - 2) + func(n - 1);
}

int func2(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return func(n - 2) + func(n - 1);
}

int main()
{
    cout << func(7);
    return 0;
}