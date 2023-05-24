#include <iostream>

using namespace std;

/*
Question: 234, take the number, and perform multiplication and addition on every digit of the number, and at the last subtract - multi minus add

Answer:
Step 1: while(n!=0)
Step 2: int digit = n % 10; get the last digit of the number (234) --> 4
Step 3: prod *= digit; multiply every digit of the number
Step 4: sum += digit; add every digit of the number
Step 5: n = n / 10; reduce the number of digits (234) -> 23; (23) -> 3; until the number if 0
Step 6: repeat the process
Step 7: int res = prod - sum; find the res which i prod - sum;
*/

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