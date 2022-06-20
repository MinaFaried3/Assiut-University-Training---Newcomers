#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
long long power(int base, int pow_num)
{
    long long result = 1;

    while (pow_num--)
    {
        result *= base;
    }

    return result;
}

long long equation(int base, int power_times)
{
    long long sum = 0;
    for (int i = 2; i <= power_times; i += 2)
    {
        sum += power(base, i);
    }
    return sum;
}
int main()
{
    int base, power_times;
    cin >> base >> power_times;

    cout << equation(base, power_times);
}