#include <iostream>

using namespace std;

int fun(int m, int n)
{
    int total = 1, i;
    for (i = 1; i <= n; i++)
    {
        total = total * m;
    }

    return total;
}

int main()
{
    cout << fun(2, 9) << endl;
    return 0;
}