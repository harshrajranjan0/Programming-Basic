

#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    // Must declared in public section of the class
    

    complex(int, int); // constructor declaration

    void PrintNum()
    {
        cout << "Your complex number: " << a << "+" << b << "i" << endl;
    }
};
complex::complex(int x, int y) //-->This is Parameterized contructor as it takes two parameter;
{
    a = x;
    b = y;
}
int main()
{
    complex a(15, 23);           // Implicit call
    complex b = complex(15, 23); // Explicit call
    a.PrintNum();
    b.PrintNum();
    return 0;
}
