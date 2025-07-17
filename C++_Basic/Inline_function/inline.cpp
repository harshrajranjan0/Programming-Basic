#include <iostream>
using namespace std;
inline int mult(int a, int b)//inline used when function have few content in it
{
    return a * b;
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

/*

An inline function is a small function where the compiler replaces the function call with the actual code of the function 
— this helps to save time during program execution.
*/