#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string num;
    long long div, result = 0;
    cin >> num >> div;
    for (int i = 0; i < num.size(); i++)
    {
        result *= 10;
        result += num[i] - '0';
        result %= div;
    }
    if (result == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}