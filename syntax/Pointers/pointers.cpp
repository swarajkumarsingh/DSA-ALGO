#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Normal integar variable
    int a = 12;

    // Here int* --> is a type of datatype which holds address of ints for the value
    // Here &a --> this gives you the address of var a, where is stored in the ram (0x61ff08)
    // Here we are assging adress of a to a var whoose data-type is to hold int address
    int *b = &a;

    // Here *b --> * operator gives the value to that address
    cout << *b;

    return 0;
}