#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    // i jytine bar chalega, j bhi utna bar hi chalega
    // much time i will run, that much time j will also run, so
    // 1 row, 1 colunms
    // 2 row, 2 colunms
    // 3 row, 3 colunms
    // n row, n colunms

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // 1, 1 --> 2, 2 --> 3, 3

        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}