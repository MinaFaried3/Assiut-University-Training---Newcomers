#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    long long x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    double cond1 = (x2 - x1) * (y4 - y3);
    double cond2 = (y2 - y1) * (x4 - x3);
    cond1 == cond2 ? cout << "YES" : cout << "NO";
}