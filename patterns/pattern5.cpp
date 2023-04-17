#include <iostream>

using namespace std;

// Normal Pattern
// 123
// 456
// 789

int main()
{
    int n, count = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // ! Two way :-
            //? 1.
            cout << i*j << " ";
            //? 2.
            cout << count << " ";

            // Increment count value
            count = count + 1;
        }
        cout << endl;
    }

    return 0;
}