#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    int lucky[] = {
        4,
        7,
        44,
        77,
        47,
        74,
        444,
        777,
        447,
        474,
        744,
        774,
        747,
        477,
    };

    int num;
    cin >> num;

    for (int i = 0; i < 14; i++)
    {
        if (num % lucky[i] == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}