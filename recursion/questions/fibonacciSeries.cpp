#include <iostream>
#include <vector>

using namespace std;

int funcRecursion(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return funcRecursion(n - 2) + funcRecursion(n - 1);
}

// Self taught function
vector<int> func1()
{
    int n;
    cin >> n;

    vector<int> arr = {0, 1};

    for (int i = 2; i < n + 2; i++)
    {
        int hum = arr[i - 1] + arr[i - 2];
        arr.push_back(hum);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return arr;
}

int func()
{
    int n = 10, a = 0, b = 1;

    cout << a << " " << b << " ";
    for (int i = 1; i <= n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";

        /*
            Now change a & b;
            b = nextNumber
            a = b;

            nextNumber = 1;  |
                             |
            b = 1; <---------|
                             |
            a = 0; <---------|

--------------------------------------------------------

            nextNumber = 2   |
                             |
            b = 2; <---------|
                             |
            a = 1; <---------|

--------------------------------------------------------

            nextNumber = 3   |
                             |
            b = 3; <---------|
                             |
            a = 2; <---------|

        */

        a = b;
        b = nextNumber;
    }
}

int main()
{
    func1();
    return 0;
}