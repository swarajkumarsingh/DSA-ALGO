// 231. Power of Two ~ Leetcode

#include <iostream>
#include <math.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    // n == 0, so it not in the Power of Two (EDGE CASE)
    if (n == 0)
        return false;

    //
    while (n % 2 == 0)
    {
        n = n / 2;
    }

    // Condition if n == 1, then the number is PowerOfTwo
    return n == 1;
}

bool isPowerOfTwo2(int n)
{
    // loop thorough every 2 to the power 32(max of value of an integer) and if the [pow(2, i) == n] then return true;
    for (int i = 0; i < 31; i++)
    {
        if (pow(2, i) == n)
            return true;
    }
    return false;
}

int main()
{
    cout << isPowerOfTwo(16) << endl
         << isPowerOfTwo2(16);
    return 0;
}