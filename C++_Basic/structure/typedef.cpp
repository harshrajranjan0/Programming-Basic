#include <iostream>
using namespace std;
typedef struct student
{
    int marks;
    int id;
    char favchar;
} st;
int main()
{
    st harsh, priyesh, prince;
    harsh.favchar = '*';
    prince.favchar = 'c';
    harsh.marks = 70;
    prince.marks = 80;
    cout << "Harsh fav. character is: " << harsh.favchar << endl;
    cout << "prince fav. character is: " << prince.favchar << endl;
    cout << "Harsh marks is: " << prince.marks << endl;
    cout << "Prince marks is: " << prince.marks << endl;
}