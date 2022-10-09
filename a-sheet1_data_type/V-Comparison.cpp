#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char opr;
    cin >> num1 >> opr >> num2;
    switch (opr)
    {
    case '=':
        if (num1 == num2)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
        break;
    case '>':
        if (num1 > num2)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
        break;
    case '<':
        if (num1 < num2)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
        break;
    }
}