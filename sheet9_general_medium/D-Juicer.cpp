#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
    long long nums, capacity, max, sum = 0, maxCount = 0;
    cin >> nums >> capacity >> max;
    long long val;
    for (int i = 0; i < nums; i++)
    {
        cin >> val;
        if (val <= capacity)
        {
            sum += val;
        }

        if (sum > max)
        {
            maxCount++;
            sum = 0;
        }
    }

    cout << maxCount;
}