#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    long long num;
    cin >> num;
    long long result = 0;
    for (int i = 1; i <= sqrt(num); i++)
    {

        if (num % i == 0)
        {
            result += i;
            
            if (i != sqrt(num))
                result += (num / i);
        }
    }

    cout << result;
}