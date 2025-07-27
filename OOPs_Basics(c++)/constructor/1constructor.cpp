#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
// Must declared in public section of the class

    complex(void); // constructor declaration
    // we can define the constructor complex here too

    void PrintNum()
    {
        cout << "Your complex number: " << a << "+" << b << "i" << endl;
    }
};
complex::complex(void)//-->This is default contructor as it takes no parameter;
{
    a = 12;
    b = 40;
    cout<<"Hello World "<<endl;;
}
int main()
{
    complex c1, c2, c3;
    // Here we don't invoke contructor as c1.complex
    // it is atomatically invoked
    c1.PrintNum();
    c2.PrintNum();
    c3.PrintNum();

    return 0;
}

// Constructor Properties
// contructor is a special memnber function with the same name as of the class.
// It is used to initialize the objects of its class.
// It is automatically invoked whenver an object is created
// It should be declared in the public section of the class
// They cannot return values and do not have return type
// It can have default arguments
//  We cannot refer to their address