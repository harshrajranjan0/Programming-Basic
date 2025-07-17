#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 10, y = 20;
    cout << "Before Swapping" << endl;
    cout << "The value of x:  " << x << " And y: " << y << endl;
    cout << "After swapping" << endl;
    swap(&x,&y);
    cout << "The value of x: " << x << " And y: " << y << endl;
    return 0;
}