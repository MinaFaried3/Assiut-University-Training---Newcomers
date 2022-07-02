#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    long long num;
    cin >> num;


    long long index = 0;

    while (num >= index)
    {
        index++;
        num -= index;
    }

    cout << index;
}