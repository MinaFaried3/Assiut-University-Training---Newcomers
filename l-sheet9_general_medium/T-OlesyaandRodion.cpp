#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
#define lol long long int

void solution1()
{
    int digits, divide;
    cin >> digits >> divide;

    string result = "";

    if (digits == 1 && divide == 10)
    {

        cout << -1;
        return;
    }
    else if (digits > 1 && divide == 10)
    {
        for (int i = 0; i < digits - 1; i++)
        {
            result += '1';
        }
        result += '0';
    }
    else
    {
        for (int i = 0; i < digits; i++)
        {
            result += divide + '0';
        }
    }

    cout << result << endl;
}
void solution2()
{
    int digits, divide;
    cin >> digits >> divide;

    if (digits == 1 && divide == 10)
    {

        cout << -1;
        return;
    }
    else if (digits > 1 && divide == 10)
    {
        for (int i = 0; i < digits - 1; i++)
        {
            cout << 1;
        }
        cout << 0;
    }
    else
    {
        for (int i = 0; i < digits; i++)
        {
            cout << divide;
        }
    }
}
void solution3()
{
    int digits, divisible;
    cin >> digits >> divisible;

    if (divisible == 10)
    {

        if (digits == 1)
        {
            cout << -1;
        }
        else
        {
            cout << 1;
            for (int i = 1; i < digits; i++)
                cout << 0;
        }
        return;
    }

    for (int i = 1; i <= digits; i++)
        cout << divisible;
}
int main()
{
    solution2();
}