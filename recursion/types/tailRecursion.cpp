#include <iostream>

using namespace std;

// If a recursive function is calling itself and that recursive call is the last statement
//     in a function then it is called as tail recursion.

// 1. Time complexity - 0(n)
// 1. Space complexity - 0(1)

void fun(int n)
{
    if (n > 0)
    {
        cout << " " << n;
        fun(n - 1);
        // NO CODE BELOW
    }
}

int main()
{
    fun(3);
    return 0;
}