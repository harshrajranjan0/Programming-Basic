#include <iostream>
using namespace std;
int main()
{
    int a = 77;
    float b = 45.55;
    // typecasting int a into float and float b to int
    cout << "The value of a is: " << float(a) << endl;
    cout << "The value of a is: " << (float)a << endl;
    cout << "The value of b is: " << (int)b << endl;
    cout << "The value of b is: " << int(b) << endl;
    int c = int(b);
    cout << "The value of expression is: " << a + b << endl;
    cout << "The value of expression is: " << a + int(b) << endl;
    cout << "The value of expression is: " << a + (int)b << endl;

    return 0;
}