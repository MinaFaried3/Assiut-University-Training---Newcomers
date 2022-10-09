#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
#include <map>
#include <stack>
#include <queue>
using namespace std;
#define lol long long int
#define endl '\n'
void fast()
{
    cin.tie(0);
    cout.sync_with_stdio(0);
}

int main()
{
    fast();
    lol size, result = -1;
    cin >> size;
    lol *arr = new lol[size];
    priority_queue<pair<lol, lol>> qu;

    for (lol i = 0; i < size; i++)
    {
        cin >> arr[i];
        qu.push({arr[i], i});
    }

    for (lol i = 0; i < size; i++)
    {
        while (qu.size() > 0 && qu.top().first >= arr[i])
        {
            result = max(result, abs(qu.top().second - i));
            qu.pop();
        }
    }

    cout << result;
}