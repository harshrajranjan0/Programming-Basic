#include <iostream>
using namespace std;
int main()
{
    int marks[] = {99, 33, 11, 44, 66};
    cout << "The value of marks[0]: " << marks[0] << endl;
    cout << "The value of marks[1]: " << marks[1] << endl;
    cout << "The value of marks[2]: " << marks[2] << endl;

    cout<<endl;
    cout<<"Using Array Pointer!!"<<endl;

    int *p = marks; // here we made p as pointer pointing first element of array (marks)
    cout << "The value of *p: " << *p << endl;
    cout << "The value of *(p+1): " << *(p + 1) << endl;
    cout << "The value of *(p+2): " << *(p + 2) << endl;
    cout << "The value of 1 index " << *(marks+1) << endl;
    return 0;
}