#include <iostream>

using namespace std;

//! Indirect Recursion
// A recursive function will call another recursive function based on a condition, hence both the functions will interact.

void funA(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        funB(n - 1);
    }
}
void funB(int n)
{
    if (n > 1)
    {
        printf("%d ", n);
        funA(n / 2);
    }
}

int main()
{
    funA(20);
    return 0;
}