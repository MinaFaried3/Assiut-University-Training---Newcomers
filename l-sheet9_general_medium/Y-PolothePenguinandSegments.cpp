#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
#define lol long long int
int main()
{
    lol size, num, line = 0;

    cin >> size >> num;
    int x, y;

    for (int i = 0; i < size; i++)
    {
        cin >> x >> y;
        line += (y - x + 1);
    }
    line %= num;
    if (line == 0)
    {
        cout << line;
    }
    else
    {
        cout << num - line;
    }
}