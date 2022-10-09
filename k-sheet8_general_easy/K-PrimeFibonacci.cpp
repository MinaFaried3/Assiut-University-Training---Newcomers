#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;

long long findFibonacci(long long num)
{
    // Binet's Fibonacci
    // from index 0

    double sqrt_5 = sqrt(5);
    long long exp1 = pow(1 + sqrt_5, num);
    long long exp2 = pow(1 - sqrt_5, num);
    long long exp3 = pow(2, num) * sqrt_5;

    return (exp1 - exp2) / exp3;
}

int main()
{
    //increase speed of cout,cin
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    bool prime[51] = {0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0};
    int cases;
    cin >> cases;
    int num;
    while (cases--)
    {

        cin >> num;

        if (prime[num] )
            cout << "prime\n";
        else
            cout << "not prime\n";
    }
}