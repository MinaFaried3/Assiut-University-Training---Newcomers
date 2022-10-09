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
    int stairs, steps;
    cin >> stairs >> steps;

    if (steps > stairs)
    {
        cout << -1;
        return 0;
    }
    else
    {
        int counts;
        if (stairs % 2 == 0)
        {
            counts = stairs / 2;
        }
        else
        {
            counts = ( stairs / 2) + 1;
        }

        for (int i = counts; i <= stairs; i++)
        {

            if (i % steps == 0)
            {
                cout << i;

                return 0;
            }
        }
    }
}