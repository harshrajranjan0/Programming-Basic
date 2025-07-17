#include <iostream>
using namespace std;
inline int mult(int a, int b) 
{//Static variable not recomanded to use in inline function
//as static variable should exist only once and retain its value
   
    static int c = 0; // static Retain previous value when called again
    c = c + 1;        // here add +1 in previous retained value and exicute
    return a * b + c;
}
int main()
{
    int a, b;
    cout << "Enter The value of a and b: " << endl;
    cin >> a >> b;
    cout << "Your Product is: " << mult(a, b) << endl;
    cout << "Your Product is: " << mult(a, b) << endl;
    cout << "Your Product is: " << mult(a, b) << endl;
    cout << "Your Product is: " << mult(a, b) << endl;
    cout << "Your Product is: " << mult(a, b) << endl;
    return 0;
}