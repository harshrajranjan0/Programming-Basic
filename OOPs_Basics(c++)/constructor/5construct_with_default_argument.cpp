#include <iostream>
using namespace std;
class simple
{
    int data1, data2;

public:
    simple(int x, int y = 9)
    {
        data1 = x;
        data2 = y;
    }
    void PrintNumber();
};
void simple::PrintNumber()
{
    cout << "The value of data1 and data2 is: " << data1 << " and " << data2 << endl;
}
int main()
{
    simple c1(1,2);
    // simple c1(1); //It will set value of data1=1 and data=9 as default
    c1.PrintNumber();
    return 0;
}
