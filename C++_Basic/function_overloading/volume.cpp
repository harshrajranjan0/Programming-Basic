#include <iostream>
using namespace std;

// volume of cyclinder
int volume(int r, int h)
{
    return (3.14 * r * r * h);
}
// volume of cuboid
int volume(int a, int b, int c)
{
    return a * b * c;
}
// volume of cube
int volume(int a)
{
    return a * a * a;
}
int main()

{
    cout << "The volume of cube of side 10: " << volume(10) << endl;
    cout << "The volume of cuboid of side 10,12,15: " << volume(10, 12, 15) << endl;
    cout << "The volume of cylinder of radius 12, and height 11: " << volume(12, 11) << endl;
    return 0;
}