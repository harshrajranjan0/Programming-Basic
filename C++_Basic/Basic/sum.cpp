#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter Your Number 1:"; //'<<' is called insertion operator
    cin >> num1;                       //'>>' called Extraction operator
    cout << "Enter Your Number 2: ";
    cin >> num2;
    cout << "Your Sum is : " << num1 + num2;
    
    return 0;
}