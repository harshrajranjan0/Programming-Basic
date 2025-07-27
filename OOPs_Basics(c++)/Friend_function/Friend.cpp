// Friend functin can be decalared inside public or private

#include <iostream>
using namespace std;
class Temp
{
   int a, b;
   //**Takes Object as Argument only so temp o1 and o2 is used**
   friend void sumcomplex(Temp o1, Temp o2);
   // Here (Temp sumcomplex) whole is declared outside class
public:
   void SetNum(int x, int y)
   {
      a = x;
      b = y;
   }

   void PrintNum(void)
   {
      cout << "The complex Num is: " << a << " + " << b << "i" << endl;
   }
};

void sumcomplex(Temp o1, Temp o2) // It is trying to acess the private data of class(not possible without friend function)
{
   /*
      //This can't Be done as 'a' and 'b' is unknown to this function

        a = o1.a + o2.a;
        b = o1.b + o2.b;
                           */
   Temp c3; // Created a new empty object:

   // SetNum Function is called  work same as c1.SetNum(3,5) in main function

   c3.SetNum((o1.a + o2.a), (o1.b + o2.b));
   c3.PrintNum();
}

int main()
{
   Temp c1, c2;

   c1.SetNum(3, 5);
   c1.PrintNum();

   c2.SetNum(4, 9);
   c2.PrintNum();

   sumcomplex(c1, c2); // calling the sumcomplex function

   return 0;
}

/* Properties of friend functions
Sure! Here's a **concise version** of the **properties of a friend function**:

---

## ✅ **Friend Function – Key Properties (Concise)**

1. **Not a Member**

   * Declared inside the class, defined outside.
   * Not called using object (`obj.func()` ❌).

2. **Access to Private/Protected Members**

   * Can access all members via object (`obj.member`), despite being non-member.

3. **Declaration Anywhere**

   * Can be declared in `private`, `public`, or `protected` — position doesn't matter.

4. **Takes Object as Argument**

   * Needs class object(s) as parameters to access their members.

5. **No `this` Pointer**

   * Doesn’t have access to `this` since it's not a member function.

6. **Used in Operator Overloading**

   * Common for overloading `+`, `<<`, `>>`, etc.

7. **Can Be Friend to Multiple Classes**

   * Useful when working with private data from more than one class.

8. **Can Be Inline**

   * Can be defined inside the class body (implicitly inline in C++11+).


*/
