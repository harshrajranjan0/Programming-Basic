#include <iostream>
using namespace std;
int main()
{

    int a = 4;
    int b = a; // b is a copy of a

    b = 10;    // Changing b
    cout<<"The value of a: " << a; // Outputs: 4 (a remains unchanged)

    return 0;
}
