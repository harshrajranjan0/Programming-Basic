#include <iostream>
using namespace std;
class binary
{
    // private: It is default if not mentioned
    string s;
    void chk_Bin();

public:
    void read();
    void convert();
    void display();
};

void binary::read()
{
    cout << "Enter Your Binary Number: " << endl;
    cin >> s;
    chk_Bin(); // It is a private function so not called directely
    // so we called it here
}

void binary::chk_Bin()
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "It is Not a Binary Number " << endl;
            exit(0);
        }
    }
}

void binary::convert()
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void binary::display()
{

    for (int i = 0; i < s.length(); i++)
    {

        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary num;
    num.read();
    // num.chk_Bin();  a private function not called directely,
    cout << "Your Binary Number is: ";
    num.display();
    num.convert();
    cout << "After Converting: ";
    num.display();

    return 0;
}