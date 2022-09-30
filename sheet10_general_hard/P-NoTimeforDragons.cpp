#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
#define lol long long int
int main()
{
    lol size;
    cin >> size;
    vector<tuple<lol, lol, lol>> vec(size);
    lol soldier, dead;
    for (int i = 0; i < size; i++)
    {
        cin >> soldier >> dead;
        get<0>(vec[i]) = soldier - dead;
        get<1>(vec[i]) = soldier;
        get<2>(vec[i]) = dead;
    }

    sort(vec.begin(), vec.end());
    lol allSoldiers = get<1>(vec[size - 1]);
    lol remainSoldiers = get<1>(vec[size - 1]) - get<2>(vec[size - 1]);

    for (int i = size - 2; i >= 0; i--)
    {
        if (remainSoldiers < get<1>(vec[i]))
        {
            allSoldiers += get<1>(vec[i]) - remainSoldiers;
            remainSoldiers = get<1>(vec[i]);
        }
        remainSoldiers -= get<2>(vec[i]);
    }
    cout << allSoldiers;
}