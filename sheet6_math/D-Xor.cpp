#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    long long a, b, q;
    cin >> a >> b >> q;

    int res = q % 3;


    if (res == 1)
    {
        cout << a;
    }
    else if (res == 2)
    {
        cout << b;
    }
    else
    {

        cout << (a ^ b);
    }
}