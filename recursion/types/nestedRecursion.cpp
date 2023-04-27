#include <iostream>

using namespace std;

//! Nested Recursion
// A recursive function will pass parameter as a recursive call is called
//     nested recursion

// A recursive function taking recursive call as its parameter is called
//     nested recursion

int fun(int n)
{
    if (n > 100)
        return n - 10;
    else
        return fun(fun(fun(n + 11)));
}

int main()
{
    fun(95);
    return 0;
}