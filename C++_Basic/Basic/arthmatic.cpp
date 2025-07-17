#include <iostream>
using namespace std;
int main()
{
    int a = 9, b = 2;
    cout << "The value of a=9, b=2" << endl<< endl;
    cout << "Value of a+b:  " << a + b << endl;
    cout << "Value of a-b:  " << a - b << endl;
    cout << "Value of a*b:  " << a * b << endl;
    cout << "Value of a/b:  " << a / b << endl;
    cout << "value of a%b:  " << a % b << endl;
    cout << "value of a++:  " << a++ << endl;
    cout << "value of a--:  " << a-- << endl;
    cout << "value of --a:  " << --a << endl;
    cout << "value of ++a:  " << ++a << endl;

    cout << endl;
    // comparison operators
    cout << "The following are the comparision operators: " << endl;
    cout << "The value of a==b is:  " << (a == b) << endl; // use of parenthesis is important here
    cout << "The value of a<=b is:  " << (a <= b) << endl;
    cout << "The value of a>=b is:  " << (a >= b) << endl;
    cout << "The value of a>b is:  " << (a > b) << endl;
    cout << "The value of a<b is:  " << (a < b) << endl;
    cout << "The value of a!=b is:  " << (a != b) << endl
         << endl;
    // Logical Operator
    cout << "The following is Logical And Operator" << endl;
    cout << "The value of Logical And Operator ((a==b) && (a<b)):  " << ((a == b) && a < b) << endl;

    return 0;
}