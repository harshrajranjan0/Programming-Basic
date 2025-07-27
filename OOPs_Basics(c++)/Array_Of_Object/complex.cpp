#include <iostream>
using namespace std;
class Temp
{
    int a, b;

public:
    void SetData(int x, int y)
    {
        a = x;
        b = y;
    }
    //let's add two complex numbers
    void SetDataBySum(Temp o1, Temp o2) //here we are passing object of class temp, temp is used here because we have to pass c1 and c2 object not just an integer
    /*Yes, o1 and o2 represent the data of c1 and c2, 
        but they are copies of c1 and c2  
                passed as arguments to the SetDataBySum function.*/

    {
        a = o1.a + o2.a;   //o1.a → means: access the a value of object o1 (which was passed as c1)
        b = o1.b + o2.b;
    }
    void printsum()
    {
        cout << "Your Complex Number is: " << a << " + " << b << "i" << endl;
    }
};

int main()
{

    /*
    When you call SetDataBySum(c1, c2):
    1.The object c1 is copied into the parameter o1.
    2.The object c2 is copied into the parameter o2.
    */
    Temp c1, c2, c3;  //here c1,c3 and c3 are objects
    c1.SetData(3, 4);
    c1.printsum();

    c2.SetData(5, 3);
    c2.printsum();

    c3.SetDataBySum(c1, c2); /*passsing objects not just integer, You are passing whole objects (like c1, c2) which have both a and b.
                                If you used int, you could only pass one number at a time — not both a and b together.                                 */
    c3.printsum();
}