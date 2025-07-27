#include <iostream>
#include <math.h>
using namespace std;
class point
{
private:
    int x, y;
    friend void Distance(point p1, point p2);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void DisplayPoint()
    {
        cout << "Your Point is: (" << x << "," << y << ")" << endl;
    }
};
void Distance(point p1, point p2)
{
    float dis = sqrt(((p1.x - p2.x) * (p1.x - p2.x)) + ((p1.y - p2.y) * (p1.y - p2.y)));
    cout << "Distance is: " << dis << endl;
}
int main()
{
    point p1(10, 12), p2(11, 42);
    p1.DisplayPoint();
    p2.DisplayPoint();

    Distance(p1, p2);

    return 0;
}