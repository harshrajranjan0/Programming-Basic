//structure are default typedefted in c++(Learn It)

#include <iostream>
using namespace std;
struct student
{
    int marks;
    int id;
    char favchar;
};
int main()
{
    struct student harsh, priyesh, prince;
    harsh.favchar = '*';
    prince.favchar = 'c';
    harsh.marks = 70;
    prince.marks = 80;
    cout << "Harsh fav. character is: " << harsh.favchar << endl;
    cout << "prince fav. character is: " << prince.favchar << endl;
    cout << "Harsh marks is: " << prince.marks << endl;
    cout << "Prince marks is: " << prince.marks << endl;
}