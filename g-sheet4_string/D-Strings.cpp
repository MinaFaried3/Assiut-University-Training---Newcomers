#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;
    cout << x.size() << " " << y.size() << endl;
    cout << x << y << endl;
    char x_char = x[0];
    char y_char = y[0];
    x[0] = y_char;
    y[0] = x_char;
    cout << x << " " << y << endl;
}