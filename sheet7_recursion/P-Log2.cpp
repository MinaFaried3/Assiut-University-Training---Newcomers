#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int counter = 0;
void log_2(long long num)
{

    if (num == 1)
    {
        return;
    }

    counter++;

    log_2(num / 2);
}
int main()
{
    long long num;
    cin >> num;
    log_2(num);
    cout << counter;
}