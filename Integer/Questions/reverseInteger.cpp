// Reverse Integer

#include <iostream>
#include <limits.h>

using namespace std;

int reverse(int x)
{
    int ans = 0;
    while (x != 0)
    {

        // Get last number
        int lastDigit = x % 10;

        // if int is greater/less than 32 Bit; return 0;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
            return 0;

        // Store answer in reverse form
        ans = (ans * 10) + lastDigit;

        // Remove last number
        x = x / 10;
    }
    return ans;
}

int main()
{
    cout << reverse(123);
    return 0;
}