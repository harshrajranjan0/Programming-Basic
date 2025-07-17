#include <iostream>
using namespace std;
int main()
{
    //& address operator
    int a = 69;
    int *b = &a;
    cout << "The address of a is: " << b << endl;
    cout << "The address of a is: " << &a << endl;

    cout << "The value of a is : " << *b << endl; // Dereferencing the pointers

    // pointer to pointer
    int **c = &b;
    cout << "The address of b is: " << &b << endl;
    cout << "The address of b is: " << c << endl;
    cout << "The value at address c: " << *c << endl;
    cout << "The value at adress value_at(value at (c)): " << **c << endl;
    return 0;
}