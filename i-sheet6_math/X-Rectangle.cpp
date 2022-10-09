#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    long long x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    long long min_x = min(min(x1, x2), min(x3, x4));
    long long max_x = max(max(x1, x2), max(x3, x4));
    long long min_y = min(min(y1, y2), min(y3, y4));
    long long max_y = max(max(y1, y2), max(y3, y4));
    long long points;
    cin >> points;
    for (int i = 0; i < points; i++)
    {
        long long x, y;
        cin >> x >> y;
        if (x >= min_x && x <= max_x && y >= min_y && y <= max_y)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
