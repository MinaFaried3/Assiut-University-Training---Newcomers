#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;

long long fact_digit_log(long long num)
{

    double digits = 0;
    for (int i = 2; i <= num; i++)
    {
        digits += log10(i);
    }

    return digits + 1;
}


int main()
{
    long long num;
    cin >> num;
    cout << "Number of digits of "<<num<<"! is " << fact_digit_log(num) ;
}