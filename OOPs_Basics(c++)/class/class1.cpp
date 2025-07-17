#include <iostream>
using namespace std;
class student
{
private:
    int chemistry, maths, pps;

public:
    int roll, id; // Data members (variables / properties)
    void getdata(int c, int m, int p); //Member functions (methods)
    void print()
    {
        cout << "Harsh Chemistyr Marks is: " << chemistry << endl;
        cout << "Harsh Maths Marks is: " << maths << endl;
        cout << "Harsh PPS Marks is: " << pps << endl;
        cout << "Harsh Roll No is : " << roll << endl;
        cout << "Harsh ID is : " << id << endl;
    }
};
void student::getdata(int c, int m, int p) //This function acts like a safe, authorized way to set marks to private member
{
    chemistry = c;
    maths = m;
    pps = p;
}

int main()
{

    student harsh;
    harsh.roll = 38;
    harsh.id = 101;
    harsh.getdata(90, 80, 100);
    harsh.print();
    cout<<endl;
    cout << "Acessing outside class(roll no) " << harsh.roll << endl; // as it is a public member so we can aceess outside the class
return 0;
}