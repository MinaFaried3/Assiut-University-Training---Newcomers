#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
long long sum_odd(long long num)
{
    long long result = (num + 1) / 2;
    return result * result;
}
long long sum_even(long long num)
{
    num /= 2;
    long long result = num * (num + 1);
    return result;
}

long long sum(long long num)
{
    long long result = (num * (num + 1)) / 2;
    return result;
}

int main()
{
    long long num1, num2;
    cin >> num1 >> num2;

    long long bigger_num = max(num1, num2);
    long long smaller_num = min(num1, num2);

    long long sum_all = sum(bigger_num) - sum(smaller_num - 1);
    long long odd_sum = sum_odd(bigger_num) - sum_odd(smaller_num - 1);
    long long even_sum = sum_even(bigger_num) - sum_even(smaller_num - 1);

    cout << sum_all << endl;
    cout << even_sum << endl;
    cout << odd_sum << endl;
}