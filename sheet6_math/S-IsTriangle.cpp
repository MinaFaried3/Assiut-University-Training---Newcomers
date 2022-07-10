#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        cout << "Valid" << endl;
        double half_sum = (a + b + c) / 2;
        double area = sqrt((half_sum) * (half_sum - a) * (half_sum - b) * (half_sum - c));
        cout << fixed << setprecision(6) << area << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
}