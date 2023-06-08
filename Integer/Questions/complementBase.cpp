// 1009. Complement of Base 10 Integer ~ Leetcode

//! DOUBT

#include <iostream>

using namespace std;

int bitwiseComplement(int n)
{

    if (n == 0)
        return 1;

    int m = n;
    int mask = 0;

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    return (~n) & mask;
}

int main()
{
    int _;
    cin >> _;

    cout << bitwiseComplement(_);
    return 0;
}