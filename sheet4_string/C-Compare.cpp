#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;

    int size_x = x.size();
    int size_y = y.size();
    int size_min = min(size_x, size_y);
    int flag = 0;
    for (int i = 0; i < size_min; i++)
    {
        if (y[i] > x[i])
        {
            cout << x << endl;
            flag = 0;
            break;
        }
        else if (y[i] < x[i])
        {
            cout << y << endl;
            flag = 0;
            break;
        }
        else
        {
            flag = -1;
        }
    }

    if (flag == -1)
    {
        if (size_x < size_y)
        {
            cout << x << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
}