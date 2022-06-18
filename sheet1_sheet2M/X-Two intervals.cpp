#include <iostream>
using namespace std;
int main()
{
    long long a, b;
    long long c, d;
    cin >> a >> b >> c >> d;
    if (c >= a && b <= d && c <= b && d >= a)
    {
        cout << c << " " << b;
    }
    else if (c <= a && d <= b && c <= b && d >= a)
    {
        cout << a << " " << d;
    }
    else if (c >= a && d <= b && c <= b && d >= a)
    {
        cout << c << " " << d;
    }
    else if (c <= a && b <= d && c <= b && d >= a)
    {
        cout << a << " " << b;
    }
    else
    {
        cout << -1;
    }
}