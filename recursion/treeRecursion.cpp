#include <iostream>

using namespace std;

//! Tree Recursion
// If a recursive function calling itself more than one time then it is tree recursion

void fun(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        fun(n - 1);
        fun(n - 1);
    }
}

int main()
{
    fun(4);
    return 0;
}