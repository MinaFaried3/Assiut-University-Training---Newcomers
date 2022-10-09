#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    long long x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double cond1 = (y3 - y2) * (x2 - x1);
    double cond2 = (y2 - y1) * (x3 - x2);
    cond1 == cond2 ? cout << "YES" : cout << "NO";
}