#include <iostream>
using namespace std;
class employee
{
private:
    int id;
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
        cout << "The Id of the Employee "<<count<< " is "<<id<<endl;
    }
};
int employee::count; // Here we Declared  static variable outside the class variable
int main()
{
    employee harsh, prince, priyesh;
    harsh.SetData();
    harsh.GetData();

    prince.SetData();
    prince.GetData();

    priyesh.SetData();
    priyesh.GetData();
    return 0;
}