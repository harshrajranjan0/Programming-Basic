// In C, default arguments are not supported
/*A default argument is a value you assign to a function parameter when defining the function, 
   so that if the caller doesn’t provide a value, the default is used automatically.
   */

#include <iostream>
using namespace std;
float moneyrecevied(int currentmoney, float factor = 1.04) // here flaot factor=1.04 is default argument
/*
     float moneyrecevied(float factor = 1.04, int currentmoney),
       THis is Incorrect because defautl argument should be in extreme right
*/
{
    return currentmoney * factor;
}
int main()
{
    int money = 100000;
    cout << "If you have " << money << "Rs in your bank, Your will receive " << moneyrecevied(money) << " After One Year " << endl;
    cout << "For VIP: If you have " << money << "Rs in your Bank, Your will receive  " << moneyrecevied(money, 1.10) << " After One Year" << endl;

    return 0;
}