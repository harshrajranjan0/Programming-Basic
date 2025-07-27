#include <iostream>
using namespace std;
class Complex
{
    int real, img;
    friend Complex SumNum(Complex x, Complex y, Complex z);

public:
    void SetNum(int a, int b)
    {
        real = a;
        img = b;
    }
    void PrintNum()
    {
        cout << "Your Imaginary Number: " << real << "+" << img << "i" << endl;
    }
};

Complex SumNum(Complex x, Complex y, Complex z)
{
   
    Complex c4;
    c4.SetNum((x.real + y.real + z.real), (x.img, y.img, z.img));
    return c4;
}
int main()
{
    Complex c1, c2, c3, sum;
    c1.SetNum(3, 5);
    c1.PrintNum();

    c2.SetNum(4, 9);
    c2.PrintNum();

    c3.SetNum(4, 9);
    c3.PrintNum();

    sum = SumNum(c1, c2, c3);
    sum.PrintNum();
    return 0;
}