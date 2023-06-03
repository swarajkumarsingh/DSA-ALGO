#include <iostream>
#include <math.h>

using namespace std;

// Convert decimal to binary
// 10 --> 1010

/*
    Take the but of n --> if n==5; then 1,2,3,4,5
    Store the bit in reverse order -> formula --> ans = ( bit * pow(10, i) ) + ans;
    Right shift the value --> 5 --> 4 --> 3 --> 2 --> 1 --> 0
    Increment i for calculation of ans 
*/

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n != 0)
    {

        // Take the but of n --> if n==5; then 1,2,3,4,5
        int bit = n & 1;

        // store the bit in reverse order
        ans = (bit * pow(10, i)) + ans;

        // right shift the value
        n = n >> 1;

        // increment i
        i++;
    }

    cout << "Answer is " << ans << endl;

    return 0;
}