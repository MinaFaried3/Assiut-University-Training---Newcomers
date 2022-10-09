#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
long long sum(long long num)
{
    return num * (num + 1) / 2;
}
int main()
{
    long long num1, num2, div;
    cin >> num1 >> num2 >> div;

    long long max_ = max(num1, num2);
    long long min_ = min(num1, num2);

    long long result = (sum(max_ / div) * div) - (sum((min_ - 1) / div) * div);

    cout << result << endl;
}