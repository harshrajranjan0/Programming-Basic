#include<iostream>
using namespace std;
int c = 49; // global variable
int main()
{
    float d = 34.4f;       // Here f/F represent float value
    long double e = 34.4l; // Here l/L represent long double
    cout << "The value of d is: " << d << endl
         << "The value of e is: " << e << endl
         << endl;

    cout << "The Size of 34.4 is: " << sizeof(34.4) << endl;//default double is taken
    cout << "The Size of 34.4f is: " << sizeof(34.4f) << endl;
    cout << "The Size of 34.4F is: " << sizeof(34.4F) << endl;
    cout << "The Size of 34.4l is: " << sizeof(34.4l) << endl;
    cout << "The Size of 34.4L is: " << sizeof(34.4L) << endl;

    return 0;
}