

#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex() {}; // This is needed default construcor

    complex(int, int);

    void PrintNum()
    {
        cout << "Your complex number: " << a << "+" << b << "i" << endl;
    }
};
complex::complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    complex b; // Need of default constructor
    b = complex(15, 23);
    complex a(15, 23);
    a.PrintNum();
    b.PrintNum();
    return 0;
}
