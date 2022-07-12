#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    long long r, s;
    cin >> r >> s;
    if (s >= r * 2)
    {
        cout << "Square" << endl;
    }
    else if (r * 2 > sqrt(pow(s, 2) + pow(s, 2)))
    {
        cout << "Circle" << endl;
    }
    else
    {
        cout << "Complex" << endl;
    }
}