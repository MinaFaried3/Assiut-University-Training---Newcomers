#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    int swaps = 0;
    int min, max;
    int minIndex = 0, maxIndex = 0;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            min = max = arr[0];
            continue;
        }

        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
        else if (arr[i] <= min)
        {
            min = arr[i];
            minIndex = i;
        }
    }

    swaps += maxIndex;

    if (maxIndex > minIndex)
        minIndex++;

    swaps += ((size - 1) - minIndex);

    cout << swaps;
}