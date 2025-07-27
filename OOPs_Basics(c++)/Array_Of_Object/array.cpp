#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void SetData()
    {
        cout << "Enter The Id of Employee: "<<endl;
        cin >> id;
    }
    void GetData()
    {

        cout << "Your Employee Id is: " << id<<endl;
    }
};
int main()
{
    Employee arr[4];
    for (int i = 0; i < 4; i++)
    {
        arr[i].SetData();
        arr[i].GetData();
    }
}