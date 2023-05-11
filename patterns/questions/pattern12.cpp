#include <iostream>

using namespace std;

// Pattern
// A B C
// D E F
// G H I

int main()
{
    int n;
    char ch = 'A';
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";      
            ch = ch + 1;
        }
        cout << endl;
    }
    return 0;
}