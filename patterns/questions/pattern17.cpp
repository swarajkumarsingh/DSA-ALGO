#include <iostream>

using namespace std;

// Love Babar lecture number 4 33.30

// Pattern
// D
// C D
// B C D
// A B C D

//? Find the starting letter of every row and increment it
//? Example: 3rd row --> B is the starting letter and incrementing the value to C ad then D

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        char value = 'A' + n - i;
        for (int j = 1; j <= i; j++)
        {
            cout << value << " ";
            value = value + 1;
        }
        cout << endl;
    }
    return 0;
}