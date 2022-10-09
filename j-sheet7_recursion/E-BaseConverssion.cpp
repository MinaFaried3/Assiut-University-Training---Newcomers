#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
void toBinary(long long num)
{
    if (num == 0)
    {

        return;
    }

    toBinary(num / 2);
    cout << num % 2;
}

void loop(int cases)
{
    if (cases == 0)
    {
        return;
    }
    long long num;
    cin >> num;
    toBinary(num);
    cout << endl;
    return loop(cases - 1);
}
int main()
{
    int cases;
    cin >> cases;
    loop(cases);
}