#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;

long long int comb(int n, int r)
{

    if (r == 0)
    {
        return 1;
    }
    else
    {
        return ((n * comb(n - 1, r - 1)) / r);
    }
}
int main()
{
    int n, r;
    cin >> n >> r;

    cout << comb(n, r);
}