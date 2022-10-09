#include <iostream>
using namespace std;
// Function to return the sum of
// all natural numbers
long long sumNatural(long long n)
{
    long long sum = (n * (n + 1)) / 2;
    return sum;
}

// Function to return the sum
// of all numbers in range L and R
long long suminRange(long long l, long long r)
{
    return sumNatural(r) - sumNatural(l - 1);
}

int main()
{

    long long times, st, nd, sum = 0;
    cin >> times;
    for (int i = 1; i <= times; i++)
    {
        cin >> st >> nd;
        if (st < nd)
        {
            sum = suminRange(st, nd);
            cout << sum << endl;
            sum = 0;
        }
        else
        {
            sum = suminRange(nd, st);
            cout << sum << endl;
            sum = 0;
        }
    }
    return 0;
}
