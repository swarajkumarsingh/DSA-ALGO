#include <iostream>

using namespace std;

// Pattern
// 1
// 2 3
// 3 4 5
// 4 5 6 7


// !Way1:

int main()
{

    int n;
    cin >> n;

    // 'row' jytine bar chalega, 'col' bhi utna bar hi chalega
    // much time 'row' will run, that much time 'col' will also run, so
    // 1 row, 1 colunms
    // 2 row, 2 colunms
    // 3 row, 3 colunms
    // n row, n colunms

    for (int row = 1; row <= n; row++)
    {
        // int value = row;

        for (int col = 0; col < row; col++) // 1, 1 --> 2, 2 --> 3, 3
        {
            cout << row + col;
            // value = value + 1;
        }
        cout << endl;
    }
    return 0;
}

// Way 2
int main2()
{

    int n;
    cin >> n;

    // 'row' jytine bar chalega, 'col' bhi utna bar hi chalega
    // much time 'row' will run, that much time 'col' will also run, so
    // 1 row, 1 colunms
    // 2 row, 2 colunms
    // 3 row, 3 colunms
    // n row, n colunms

    for (int row = 1; row <= n; row++)
    {
        int value = row;

        for (int col = 0; col < row; col++) // 1, 1 --> 2, 2 --> 3, 3
        {
            cout << value;
            value = value + 1;
        }
        cout << endl;
    }
    return 0;
}