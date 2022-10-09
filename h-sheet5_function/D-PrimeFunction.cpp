#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
bool isPrime(long long num)
{
    if (num == 1)
    {
        return false;
    }
    for (int i = sqrt(num); i >= 2; i--)

    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        long long num;
        cin >> num;
        isPrime(num) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}