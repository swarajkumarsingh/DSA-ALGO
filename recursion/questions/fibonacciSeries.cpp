#include <iostream>
#include <vector>

using namespace std;

int funcRecursion(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return func(n - 2) + func(n - 1);
}

int func()
{
    int n = 10, a = 0, b = 1;

    cout << a << " " << b << " ";
    for (int i = 1; i <= n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";

        /*
            Now change a & b;
            b = nextNumber
            a = b;

            nextNumber = 1;  |
                             |
            b = 1; <---------|
                             |
            a = 0; <---------|

--------------------------------------------------------

            nextNumber = 2   |
                             |
            b = 2; <---------|
                             |
            a = 1; <---------|

--------------------------------------------------------

            nextNumber = 3   |
                             |
            b = 3; <---------|
                             |
            a = 2; <---------|

        */
       
        a = b;
        b = nextNumber;
    }
}

int main()
{
    cout << func();
    return 0;
}