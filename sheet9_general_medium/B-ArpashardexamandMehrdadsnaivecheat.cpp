#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    long long result = n % 4;

    if (n == 0)
    {
        cout << 1;
        return 0;
    }

    switch (result)
    {
    case 1:
        cout << 8;
        break;
    case 2:
        cout << 4;
        break;
    case 3:
        cout << 2;
        break;
    case 0:
        cout << 6;
        break;
    }
}