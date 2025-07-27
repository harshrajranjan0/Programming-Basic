#include <iostream>
using namespace std;
class Shop
{
    int ItemId[100];
    int ItemPrice[100];

public:
    int itemNo;
    void items();
    void SetItemPrice();
    void DisplayPrice();
};

void Shop::items()
{

    cout << "Enter Total Number of Items: " << endl;
    cin >> itemNo;
}

void Shop::SetItemPrice()
{

    for (int i = 0; i < itemNo; i++)
    {

        cout << "Enter Id of Item Number " << i + 1 << endl;
        cin >> ItemId[i];
        cout << "Enter Price of Item Number " << i + 1 << endl;
        cin >> ItemPrice[i];
    }
}
void Shop::DisplayPrice()
{
    for (int i = 0; i < itemNo; i++)
    {
        cout << "The Price of Item With Id " << ItemId[i] << " is Rs " << ItemPrice[i] << endl;
    }
}
int main()
{
    Shop Hisar;
    Hisar.items();
    Hisar.SetItemPrice();
    Hisar.DisplayPrice();
    return 0;
}
