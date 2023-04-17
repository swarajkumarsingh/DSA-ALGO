#include <iostream>

using namespace std;

int main()
{
    string name = "simu";

    cout << "The name is " << name << endl;
    cout << "The name is " << name.length() << endl;
    cout << "The name is " << name.substr(0, 3) << endl; // 0 - 2 index of the string
}