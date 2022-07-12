#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    double mid_X1 = (x1 + x2) / 2;
    double mid_y1 = (y1 + y2) / 2;
    double mid_X2 = (x3 + x4) / 2;
    double mid_y2 = (y3 + y4) / 2;
    double radius1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) / 2;
    double radius2 = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2)) / 2;
    double line = sqrt(pow(mid_X1 - mid_X2, 2) + pow(mid_y1 - mid_y2, 2));
    double sum_radius = radius1 + radius2;
    if (line > sum_radius)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}