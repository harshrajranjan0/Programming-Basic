#include <iostream>
using namespace std;
int sum(int a, int b)
{ // int sum(float a, int b)
    cout << "Using Two Argument " << endl;
    return a + b;
}
int sum(int a, int b, int c)

{
    cout << "Using Three Argument " << endl;
    return a + b + c;
}
int main()
{
    cout << "Your Sum is: " << sum(3, 6) << endl;

    cout << "Your Sum is: " << sum(3, 6, 9) << endl;
    return 0;
}