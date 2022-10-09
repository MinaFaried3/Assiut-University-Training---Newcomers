#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
long long factory(int num)
{
    long long result = 1;
    for (int i = num; i >= 2; i--)
    {
        result *= i;
    }

    return result;
}

long long NPR(int n, int r)
{
    return factory(n) / factory(n - r);
}
long long NCR(int n, int r)
{
    return factory(n) / (factory(n - r) * factory(r));
}

int main()
{
    int n, r;
    cin >> n >> r;
    long long ncr = NCR(n, r);
    long long npr = NPR(n, r);

    cout << ncr << " " << npr;
}