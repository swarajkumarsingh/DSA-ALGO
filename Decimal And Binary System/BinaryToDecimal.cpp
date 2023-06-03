#include <iostream>
#include <math.h>

using namespace std;

// Binary to Decimal
/*
1. Get the last digit of the number
2. if the last digit is 1, then add pow(2, i) in ans
3. Remove the lastDigit, so nextTime, another digit appears
*/

int main()
{

    int n;
    cin >> n;

    int i = 0, ans = 0;

    while (n != 0)
    {
        // Get last digit 123 --> 3
        int lastDigit = n % 10;

        // if last digit is 1; then follow the 2 pow series
        if (lastDigit == 1)
        {
            ans = ans + pow(2, i);
        }

        // remove the last digit, so that next time, the second last digit comes 123 --> 12 --> 1
        n = n / 10;
        i++;
    }

    cout << "Binary: " << n << " | | "
         << "Decimal: " << ans << endl;

    return 0;
}