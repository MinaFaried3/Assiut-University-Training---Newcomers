#include <iostream>
#include <string>
using namespace std;
int main()
{

    long long e;
    cin >> e;
    long long temp1 = e;
    int f = 0;
    int a = 0;
    int d = 0;
    long long temp = 0;
    int c;
    int b;
    while (e != 0)
    {
        d += f;     // 0       1
        a = e % 10; // 1       2
        b = e - a;  // 12120   1210
        c = b / 10; // 1212    121
        d = a;      // 1       2
        temp *= 10; // 10      20
        temp += d;  // 10      21
        f = a;
        e = c; // 1212
    }

    cout << temp << endl;
    if (temp1 == temp)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}