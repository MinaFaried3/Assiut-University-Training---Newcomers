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
lol counts[100001] = {0};
int main()
{
    lol cases;
    cin >> cases;

    lol *arr = new lol[cases];

    for (lol i = 0; i < cases; i++)
    {
        cin >> arr[i];

        counts[arr[i]]++;
    }
    lol counter = 0;
    for (lol i = 0; i < cases; i++)
    {
        if (counts[arr[i]] > 1)
        {
            counter += counts[arr[i]] - 1;
            counts[arr[i]] = 0;
        }
    }

    if (counter == 0)
    {
        cout << -1;
    }
    else
        cout << counter;
}