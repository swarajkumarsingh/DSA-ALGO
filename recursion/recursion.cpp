#include <iostream>

using namespace std;

// Function repeating in it's self, based on a condition, if the condition is not given, it will repeat infinitely.

void func2(int n)
{
    if (n > 0)
    {
        func2(n - 1);
        cout << n << endl;
    }
}

int main()
{
    int x = 3;
    func2(x);

    return 0;
}