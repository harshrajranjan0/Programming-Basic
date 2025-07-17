#include <iostream>
#include <iomanip> //for using setw
using namespace std;
int main()
{
    int a = 3, b = 21, c = 353;

    cout << "The value of a: " << a << endl;
    cout << "The value of b: " << b << endl;
    cout << "The value of c: " << c << endl;
    cout << endl;
    cout << "By using 'Setw'" << endl;
    cout << "The value of a: " << setw(4) << a << endl;
    cout << "The value of b: " << setw(4) << b << endl;
    cout << "The value of c: " << setw(4) << c << endl;
    return 0;
}