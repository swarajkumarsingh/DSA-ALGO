#include <iostream>

using namespace std;

// Making Function
int add(int a, int b)
{
    return a + b;
}

int main()
{
    cout << "Hello, world!";

    // Variables
    int a, b, c;
    string str;

    // Take value from the user
    cin >> a;
    cin >> b;

    // If else statement
    if (a == 0)
    {
        cout << "IT IS A 0";
    }
    else if (a == 1)
    {
        cout << "IT IS A 1";
    }

    // Switch statement
    switch (a)
    {
    case 2:
        cout << "IT IS A 2";
        break;

    default:
        cout << "IT IS A NUMBER";
        break;
    }

    // Function Call
    int sum = add(a, b);
    cout << "The Sum of a and b is " << sum << endl;

    // Typecasting
    int a = 110;
    cout << (float) a;

    return 0;
}