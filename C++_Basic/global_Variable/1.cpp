#include <iostream>
using namespace std;
int c = 49; // global variable
int main()
{
    int a, b, c;
    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;
    c = a + b;
    cout << "The sum of is c= " << c << endl;
    cout << "The global varibale c: " << ::c<<endl; // '::' scope resolution operator
    return 0;
}