#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
bool isPrime(long long num)
{
    for (int i = 2; i <= sqrt(num); i++)
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
    long long num;
    cin >> num;

    bool start = true;
    if (isPrime(num))
        cout << "(" << num << "^" << 1 << ")";

    else
    {
        for (int i = 2; i < num / 2; i++)
        {

            int counter = 0;

            // to find the number contains how many of prime divisors
            while (num % i == 0)
            {
                counter++;
                num /= i;
            }

            if (counter >= 1)
            {
                if (!start)
                {
                    cout << "*";
                }

                cout << "(" << i << "^" << counter << ")";

                start = false;
            }
        }
        if (num > 1)
            cout << "*"
                 << "(" << num << "^" << 1 << ")";
    }
}
