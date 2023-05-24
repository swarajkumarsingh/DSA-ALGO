#include <iostream>
#include <vector>

using namespace std;

int func(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return func(n - 2) + func(n - 1);
}

int func1()
{
    int a = 0, b = 1;
    int n = 10;
    cout << a << " " << b << " ";

    for (int i = 1; i <= n; i++)
    { 
        int f = a + b;
        cout << f << " ";

        a = b;
        b = f;
    }
}

int main()
{
    // cout << func(7);
    cout << func1();
    return 0;
}