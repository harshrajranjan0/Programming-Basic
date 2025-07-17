#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    cout << "The value of a was: " << a << endl;
    a = 69; // we can change the value in c++
    // we use const to avoid this
    cout << "The value of a is: " << a << endl;
    return 0;
}