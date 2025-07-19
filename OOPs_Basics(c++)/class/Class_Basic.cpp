#include <iostream>
using namespace std;
class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void SetData(int a1, int b1, int c1); // Declaratation
    /* and will define later so code look better
                     We can define here too no problem */
    void GetData()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
        cout << "The value of e is: " << e << endl;
    };
};
void employee::SetData(int a1, int b1, int c1)// Here :: is scope resolution operator
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employee harsh;
    harsh.SetData(1, 2, 3);
    // harsh.a=121 , this will throw error as a is private
    harsh.d = 34;
    harsh.e = 89;
    harsh.GetData();
    return 0;
}

/*
🔹 What is Object-Oriented Programming (OOP)?
OOP is a programming style where data and the functions that operate on that data are bundled together into a single unit called a class.

Objects are created from classes and represent real-world entities.

🔹 C Language (Procedural / Structured Programming)
Uses structs to store data.

Functions are defined separately from structs.

You have to manually pass data to functions.

No concept of objects that manage their own behavior.

No support for encapsulation, inheritance, or polymorphism.

🔹 Object-Oriented Languages (C++, Java, Python)
Use classes to bundle data + functions together.

You create objects from classes.

Objects contain both the data and the functions (methods) to manipulate that data.

Promotes self-contained units that manage their own state and behavior.

🔹 Key OOP Features in Classes
Encapsulation: Hiding internal details, exposing only what’s needed.

Inheritance: One class can inherit features from another.

Polymorphism: Same function name can perform different actions based on the object.

Abstraction: Focus on essential features, hiding complexity.



*/