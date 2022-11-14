#include <iostream>
using namespace std;
void solution1()
{
    int number;
    cin >> number;
    int res = number / 1000;
    if (res % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }
}

void solution2()
{
    string num;
    cin >> num;
    int digit = num[0] - '0';

    if (digit % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }
}

void solution3()
{
    char num;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }
}
int main()
{
    solution3();
}