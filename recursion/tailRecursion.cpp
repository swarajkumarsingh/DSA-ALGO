#include <iostream>

using namespace std;

// If a recursive function is calling itself and that recursive call is the last statement
//     in a function then it is called as tail recursion.

void fun(int n)
{
    if (n > 0)
    {
        printf("%d", n);
        fun(n - 1);
        // NO CODE BELOW
    }
}

int main()
{
    fun(3);
    return 0;
}