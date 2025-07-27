#include <iostream>
using namespace std;
class c2;
class c1
{
private:
    int val1;
    friend void swap(c1 &o1, c2 &o2);

public:
    void setval(int a)
    {
        val1 = a;
    }
    void display()
    {
        cout << "Value of 'val1': " << val1 << endl;
    }
};
class c2
{
private:
    int val2;
    friend void swap(c1 &o1, c2 &o2);

public:
    void setval(int b)
    {
        val2 = b;
    }
    void display()
    {
        cout << "Value of 'val2': " << val2 << endl;
    }
};
void swap(c1 &o1, c2 &o2)
{
    int temp = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = temp;
}

int main()
{
    int v1, v2;
    c1 o1;
    c2 o2;

    cout << "Enter value of val1 and val2: " << endl;
    cin >> v1 >> v2;
    o1.setval(v1);
    o2.setval(v2);
    o1.display();
    o2.display();
    swap(o1, o2);
    cout << "After swapping: " << endl;
    o1.display();
    o2.display();
}