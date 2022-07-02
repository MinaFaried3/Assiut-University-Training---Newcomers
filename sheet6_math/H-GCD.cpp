#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
long long GCD(long long num1, long long num2)
{
    long long temp;

    while (num2 != 0)
    {
        temp = num1;
        num1 = num2;
        num2 = temp % num1;
    }

    return num1;
}
int main()
{
    long long num1, num2;
    cin >> num1 >> num2;
    long long max_num = max(num1, num2);
    long long min_num = min(num1, num2);
    long long gcd = GCD(min_num, max_num);
    long long lcm = (min_num / gcd) * max_num;

    cout << gcd << " " << lcm;
}