#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
long long process(long long num)
{

    if (num == 1)
    {
        return 0;
    }
    else if (num == 2)
    {
        return 1;
    }
    else
    {
        return process(num - 1) + process(num - 2);
    }
}
int main()
{
    long long num;
    cin >> num;
    cout << process(num);
}