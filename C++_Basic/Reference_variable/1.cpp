#include <iostream>
using namespace std;
int main()
{
    int x = 123;
    int &y = x;  //y becomes another name for x,
    cout << "The value of x: " << x << endl;
    cout << "The value of y: " << y << endl;
y=120;
cout<<"The value of x is :"<<x<<endl;
    return 0;
}
