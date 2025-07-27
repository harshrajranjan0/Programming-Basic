#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number() // default constructor
    {
        a = 0;
    };

    number(int num)
    {
        a = num;
    }

    // When no copy constructor is found, compiler supplies its own copy constructor
    
    number(number &obj) // copy constructor
    {
        cout << "Calling Copy Constructor!!" << endl;
        a = obj.a;
    }
    void Display()

    {
        cout << "The number for this object is: " << a << endl;
    }
};
int main()
{
    number x, y, z(44), z2;
    x.Display();
    y.Display();
    z.Display();

    number z1(z); // copy constructor is called
    z1.Display();

    z2 = z; // copy constructor is not called
    z2.Display();

    number z3 = z; // copy Constructor is called
    z3.Display();
    return 0;
}


/*
🔹 Why Do We Use a Copy Constructor?
To copy one object to another during:

Object initialization (Class obj2 = obj1;)

Passing object by value to a function

Returning an object from a function by value

To define custom copy behavior when a deep copy is needed (for example, with dynamic memory).


*/