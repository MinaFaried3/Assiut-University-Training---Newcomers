#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    double x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double sub_x = pow(x1 - x2, 2);
    double sub_y = pow(y1 - y2, 2);
    double result = sqrt(sub_x + sub_y);

    cout << fixed << setprecision(9) << result;
}