#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
long long factorial(int num)
{
    if (num == 1)
    {
        return num;
    }

    return num * factorial(num - 1);
}

int main()
{
    int num;
    cin >> num;
    cout << factorial(num);
}