#include <iostream>
using namespace std;

void solution1()
{
    long long a, b;
    long long c, d;
    cin >> a >> b >> c >> d;
    long long equation = a % 100 * b % 100 * c % 100 * d % 100;
    if (equation <= 9)
    {
        cout << "0" << equation;
    }
    else
    {
        cout << equation;
    }
}

void solution2()
{
    long long a, b;
    long long c, d;
    cin >> a >> b >> c >> d;
    long long a1 = a % 100;
    long long b1 = b % 100;
    long long c1 = c % 100;
    long long d1 = d % 100;
    long long x = a1 * b1 * c1 * d1;
    if (x % 100 <= 9)
    {
        cout << "0" << x % 100;
    }
    else
    {
        cout << x % 100;
    }
}
int main()
{
    solution1();
}