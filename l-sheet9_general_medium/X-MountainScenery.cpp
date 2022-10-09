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
int main()
{
    int size, mountains;
    cin >> size >> mountains;

    size *= 2;
    size++;

    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < size; i += 2)
    {
        if (arr[i] > arr[i - 1] + 1 && arr[i] > arr[i + 1] + 1)
        {
            arr[i]--;
            mountains--;
        }

        if (mountains == 0)
        {
            break;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}