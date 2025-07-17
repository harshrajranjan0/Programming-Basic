
#include <iostream>
using namespace std;
int &swapreference(int &a, int &b) // int & is important to return reference
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main()
{
    int x = 10, y = 20;
    cout << "Before Swapping" << endl;
    cout << "The value of x:  " << x << " And y: " << y << endl;
    cout << "After swapping" << endl;
    swapreference(x, y) = 766;
    cout << "The value of x: " << x << " And y: " << y << endl;
    return 0;
}