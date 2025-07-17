#include <iostream>
using namespace std;
class student
{
private:
    int marks, pocketmoney;

public:
    int id, roll;
    void assprivate(int a, int b)
    {
        marks = a;
        pocketmoney = b;
    }
    void print()
    {
        cout << "Harsh Marks is:" << marks << endl;
        cout << "Harsh Pocketmoney is: " << pocketmoney << "Rs" << endl;
        cout << "Harsh Id. is: " << id << endl;
        cout << "Harsh Roll No. is: " << roll << endl;
    }
};
int main()
{
    student harsh;
    harsh.assprivate(90, 2000);
    harsh.id = 01;
    harsh.roll = 38;

    harsh.print();
    return 0;
}