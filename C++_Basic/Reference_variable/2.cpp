#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int &b = a; // b is a reference to a

    b = 10;    // Changing b
    cout<<"The value of a: " << a; // Outputs: 10 (a is changed as well)

    return 0;
}
