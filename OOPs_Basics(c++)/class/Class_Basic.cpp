#include <iostream>
using namespace std;
class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void SetData(int a1, int b1, int c1); // Declaratation
    /* and will define later so code look better
                     We can define here too no problem */
    void GetData()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
        cout << "The value of e is: " << e << endl;
    };
};
void employee::SetData(int a1, int b1, int c1)// Here :: is scope resolution operator
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employee harsh;
    harsh.SetData(1, 2, 3);
    // harsh.a=121 , this will throw error as a is private
    harsh.d = 34;
    harsh.e = 89;
    harsh.GetData();
    return 0;
}