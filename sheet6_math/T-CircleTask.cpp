#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
double calc_distance(long long x1, long long y1, long long x2, long long y2)
{
    long long pow_sub_x = pow(x2 - x1, 2);
    long long pow_sub_y = pow(y2 - y1, 2);
    double distance = sqrt(pow_sub_x + pow_sub_y);
    return distance;
}
int main()
{
    long long x, y, radius, times;
    cin >> x >> y >> radius >> times;
    while (times--)
    {
        long long x2, y2;
        cin >> x2 >> y2;

        double distance = calc_distance(x, y, x2, y2);
        if (distance <= radius)
        {
            cout << "YES" << endl;
        } 
        else
        {
            cout << "NO" << endl;
        }
    }
}