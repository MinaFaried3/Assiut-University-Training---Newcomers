#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
long long input;
bool reachValue(long long num)
{
    if (input < num)
    {
        return false;
    }
    else if (input == num)
    {
        return true;
    }
    else
    {
        return reachValue(num * 10) || reachValue(num * 20);
    }
}
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        cin >> input;
        reachValue(1) ? cout << "YES" << endl : cout << "NO" << endl;
    }
}