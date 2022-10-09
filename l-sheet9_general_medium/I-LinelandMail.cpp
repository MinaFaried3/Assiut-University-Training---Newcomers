#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
#define lol long long int

int main()
{
    int size;
    cin >> size;

    lol *arr = new lol[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    lol max_, min_, minLeft, minRight, maxLeft, maxRight;
    for (int i = 0; i < size; i++)
    {

        // !notice
        //? always subtract smaller from bigger then take abs

        if (i == 0)
        {

            min_ = abs(arr[i] - arr[i + 1]);
            max_ = abs(arr[i] - arr[size - 1]);
        }
        else if (i == size - 1)
        {
            min_ = abs(arr[i - 1] - arr[i]);
            max_ = abs(arr[0] - arr[size - 1]);
        }
        else
        {
            maxLeft = abs(arr[0] - arr[i]);
            maxRight = abs(arr[i] - arr[size - 1]);

            max_ = max((maxLeft), (maxRight));

            minLeft = abs((arr[i - 1]) - (arr[i]));
            minRight = abs(arr[i] - arr[i + 1]);

            min_ = min((minLeft), (minRight));
        }
        cout << (min_) << " " << (max_) << endl;
    }
}