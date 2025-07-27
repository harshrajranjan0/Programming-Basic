#include <iostream>
using namespace std;
// Forward Declaration
class complex;
class calculator
{
public:
    int sum(int x, int y)
    {
        return (x + y);
    }
    int SumRealPart(complex, complex);
    int SumCompPart(complex, complex);
};

class complex
{
    int a, b;
    // Indivisually Declaring Function as frined
    // friend int calculator::SumRealPart(complex, complex);
    // friend int calculator::SumCompPart(complex, complex);

    // Aliter: Declaring whole calculator class as friend
    friend class calculator;

public:
    void SetData(int x, int y)
    {
        a = x;
        b = y;
    }
    void PrintNum()
    {
        cout << "Your Complex Number: " << a << "+" << b << endl;
    }
};

int calculator::SumRealPart(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::SumCompPart(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.SetData(2, 4);
    o2.SetData(8, 1);
    calculator cal;
    int sum = cal.SumRealPart(o1, o2);
    cout << "sum of real parts is: " << sum << endl;
    sum = cal.SumCompPart(o1, o2);
    cout << "sum of Complex parts is: " << sum << endl;
    return 0;
}