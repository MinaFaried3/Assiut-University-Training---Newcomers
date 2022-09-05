#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
#define lol long long int
void Fast()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
}
int main()
{
    Fast();
    lol num;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num / 2;
    }
    else
    {
        cout << ((num + 1) / 2) * -1;
    }
}