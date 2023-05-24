#include <iostream>

using namespace std;

// 234 --> 15

int subProductAndSum(int n)
{
    int prod = 1, sum = 0;
    while (n != 0)
    {
        // Get last number 4,3,2 --> do multiplication and addition
        int digit = n % 10;
        prod *= digit;
        sum += digit;

        // reduce the number 234 --> 23 --> 3 --> 0
        n = n / 10;
    }
    int res = prod - sum;
    return res;
}

int main()
{
    int result = subProductAndSum(234);
    cout << result << endl;
    return 0;
}