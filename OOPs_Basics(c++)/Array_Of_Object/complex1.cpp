#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    void SetData(int a, int b)
    {
        real = a;
        img = b;
    }
    void PrintData()
    {
        cout << "Your Imaginary Number: " << real << "+" << img <<"i"<< endl;
    }
    void SumNum(complex x, complex y, complex z)
    // objectName.memberName
    // x.real :  Refers to the 'real' data member of the object 'x' (first parameter).
    // y.real :  Refers to the 'real' data member of the object 'y' (first parameter).
    {
        real = x.real + y.real + z.real;
        img = x.img + y.img + z.img;
    }
};
int main()
{
    complex c1, c2, c3, c4; // c1,c3,c3 are objects
    c1.SetData(5, 1);
    c1.PrintData();
    c2.SetData(3, 4);
    c2.PrintData();
    c3.SetData(2, 9);
    c3.PrintData();
    c4.SumNum(c1, c2, c3);
    c4.PrintData();
    return 01;
}