

#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:

    

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
    complex a(15, 23);           
    complex b= complex(15, 23); //No need of default constructor
    a.PrintNum();
    b.PrintNum();
    return 0;
}
