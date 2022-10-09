#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int minNum = min(min(num1, num2), num3), maxNum = max(max(num1, num2), num3);

    cout << maxNum - minNum;
}