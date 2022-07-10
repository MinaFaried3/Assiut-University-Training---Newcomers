#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    long long num1, num2, mod;
    cin >> num1 >> num2 >> mod;
    long long start = min(num1, num2);
    long long result = 1;
    long long end = max(num1, num2);

    for (int i = start; i <= end; i++)
    {
        result *= i;
        result %= mod;
    }
    cout << result;
}