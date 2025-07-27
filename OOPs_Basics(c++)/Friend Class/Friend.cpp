#include <iostream>
using namespace std;
class y; /*forward declaration,This line tells the compiler:
                    "I will define class y later."
                            This is necessary because we use class y as a parameter in the friend function inside class x.
 */
class x
{
    int data;

public:
    void SetVal(int value)
    {
        data = value;
    }
    friend void sum(x, y);
};
class y
{
    int num;

public:
    void SetVal(int value)
    {
        num = value;
    }
    friend void sum(x, y);
};
void sum(x o1, y o2)
{
    cout << "The sum is: " << (o1.data + o2.num) << endl;
}
int main()
{
    x o1;
    o1.SetVal(4);
    y o2;
    o2.SetVal(3);
    sum(o1, o2);
}