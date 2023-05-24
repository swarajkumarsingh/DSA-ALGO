#include <iostream>

using namespace std;

// check is the last bit is 1, then incr count, and then right shift(remove last elem), do this un-till the last value

// 0,0, ..... 0,1,1,0
// 0,0, ..... 0,1,1
// 0,0, ..... 0,1
// 0,0, ..... 0

int hammingWeight(uint32_t n)
{
    int count = 0;
    while (n != 0)
    {
        // if 1 & 1 true condition --> 
        if (n & 1)
        {
            count++;
        }
        // right shifting the values
        n = n >> 1;
    }
    return count;
}

int hammingWeight2(uint32_t n)
{
    int count = 0;
    while (n != 0)
    {
        count += (n % 2);
        n >>= 1;
    }
    return count;
}

int main()
{
    int result = hammingWeight(00000000000000000000000000001011);
    result = hammingWeight2(00000000000000000000000000001011);
    cout << result << endl;
    return 0;
}