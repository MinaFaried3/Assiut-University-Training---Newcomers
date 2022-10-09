#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    cin >> num1 >> num2;
    if (num1 == 0 && num2 == 0)
        cout << "Origem" << endl;

    else if (num1 == 0 && num2 != 0)
        cout << "Eixo Y" << endl;

    else if (num1 != 0 && num2 == 0)
        cout << "Eixo X" << endl;

    else if (num1 > 0 && num2 > 0)
        cout << "Q1" << endl;

    else if (num1 < 0 && num2 > 0)
        cout << "Q2" << endl;

    else if (num1 < 0 && num2 < 0)
        cout << "Q3" << endl;

    else
        cout << "Q4" << endl;
}