#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 33, 43};
    cout << "Value of arr[0]: " << arr[0] << endl;
    cout << "Value of arr[0]: " << arr[1] << endl;
    cout << "Value of arr[0]: " << arr[2] << endl
         << endl;

    arr[2] = 69;//you can change the value of an array
    cout << "The changed value of arr: " << arr[2] << endl;

    return 0;
}