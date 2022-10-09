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
long long findBiggestDivDen(lol den1, lol den2)
{
    // 6 4
    // 4 2
    // 2 0
    if (den2 != 0)
    {
        return findBiggestDivDen(den2, den1 % den2);
    }

    return den1;
}
long long findBiggestDivNum(lol num1, lol num2)
{
    return ((num1 / findBiggestDivDen(num1, num2)) * num2);
}
int main()
{
    lol num1, den1, num2, den2, num3, den3;
    char fract;

    cin >> num1 >> fract >> den1 >> num2 >> fract >> den2;

    den3 = findBiggestDivDen(den1, den2);

    num3 = findBiggestDivNum(num1, num2);

    cout << num3 << fract << den3;
}