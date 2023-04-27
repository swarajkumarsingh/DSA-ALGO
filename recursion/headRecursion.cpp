#include <iostream>

using namespace std;

// Here the first statement inside the function is recursive call and
//  all the processing of this function will be done after that( in returning time )

// Code below the function will execute, in the returning time of the funvtion

void fun(int n)
{
    if (n > 0)
    {
        fun(n - 1); // head recursion
        // ...more code
        // ...more code
        // ...more code
    }
}

int main()
{
    fun(3);
    return 0;
}