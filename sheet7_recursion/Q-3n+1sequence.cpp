#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int counter = 0;
void sequence(long long num)
{
    counter++;
    if (num == 1)
    {
        return;
    }

    if (num % 2 == 0)
    {
        sequence(num / 2);
    }
    else
    {
        sequence(3 * num + 1);
    }
}
int main()
{
    long long num;
    cin >> num;
    sequence(num);
    cout << counter;
}