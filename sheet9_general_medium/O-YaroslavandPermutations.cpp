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
int repeats[1001] = {0};
int main()
{
    Fast();
    int size;
    cin >> size;

    int *arr = new int[size];
    int max_;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        repeats[arr[i]]++;

        if (i == 0)
        {
            max_ = repeats[arr[i]];
        }
        else
        {
            max_ = max(max_, repeats[arr[i]]);
        }
    }

    if (size % 2 == 0 && max_ <= size / 2)
    {
        cout << "YES";
    }
    else if (size % 2 != 0 && max_ <= ((size / 2) + 1))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}