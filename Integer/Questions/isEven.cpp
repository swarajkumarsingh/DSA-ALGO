// Is even or odd number

#include <iostream>

using namespace std;

void isEven(int num)
{
    if (num % 2 == 0)
    {
        cout << "EVEN Number";
    }
    else
    {
        cout << "ODD Number";
    }
}

int main()
{
    int _;
    cin >> _;
    isEven(_);

    return 0;
}