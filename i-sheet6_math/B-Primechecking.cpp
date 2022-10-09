#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
bool isPrime(long long num)
{
    if (num < 2)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}
int main()
{
    long long num;
    cin >> num;
    if (isPrime(num))
        cout << "YES";
    else
        cout << "NO";
}