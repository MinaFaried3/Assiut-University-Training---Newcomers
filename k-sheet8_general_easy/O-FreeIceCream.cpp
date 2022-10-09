#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    long long mainValue;
    cin >> mainValue;
    char chr;
    long long value;
    long long failed = 0;
    while (cases--)
    {
        cin >> chr >> value;
        if (chr == '+')
        {
            mainValue += value;
        }
        else
        {
            if (value > mainValue)
            {
                failed++;
                continue;
            }

            mainValue -= value;
        }
    }

    cout << mainValue << " "<<failed;
}