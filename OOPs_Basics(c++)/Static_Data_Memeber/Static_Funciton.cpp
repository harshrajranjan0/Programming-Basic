#include <iostream>
using namespace std;
class employee
{
private:
    int id;
    // static int count=0 Incorrect

    static int count; // To pass count to one object(harsh) to other(priyesh)
    // static variable written outside the class
public:
    void SetData()
    {
        cout << "Enter The Id of Employee: " << endl;
        cin >> id;
        count++;
    }
    void GetData()
    {
        cout << "The Id of the Employee " << count << " is " << id << endl;
    }

    // creating static Member funciton
    static void GetCount()  //static function access only static varible
    {
        // cout<<id; error as not a static variable
        
        cout << "The value of count is: " << count << endl; //Here count is static variable;
    }

};

int employee::count; // Here we Declared  static variable outside the class variable

int main()
{
    employee harsh, prince, priyesh;
    harsh.SetData();
    harsh.GetData();
    employee::GetCount();

    prince.SetData();
    prince.GetData();
    employee::GetCount();

    priyesh.SetData();
    priyesh.GetData();
    employee::GetCount();
    return 0;
}