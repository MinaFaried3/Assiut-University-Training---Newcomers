#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;

long long max_temp;
// solution1

void max_num(long long arr[], int index)
{
    if (index == -1)
    {
        return;
    }

    if (max_temp < arr[index])
    {
        max_temp = arr[index];
    }

    max_num(arr, index - 1);
}
// -------------------------------------------------------------------
// solution2
int length;
void maxNumber(long long arr[])
{
    if (length == 0)
    {
        return;
    }
    //
    // 5             -     5;
    // 0  1 2 3 4
    // 1 10 3 4 5
    if (max_temp < arr[--length])
    {
        max_temp = arr[length]; // 4 3 2 1 0
    }

    maxNumber(arr);
}
int main()
{
    // solution1
    int size;
    cin >> size;
    long long *arr = new long long[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    max_temp = arr[size - 1];
    max_num(arr, size - 1);
    cout << max_temp;
    delete[] arr;

// -----------------------------------------------------------------
    // solution 2
    // cin >> length;
    // long long *arr = new long long[length];

    // for (int i = 0; i < length; i++)
    // {
    //     cin >> arr[i];
    // }
    // max_temp = arr[length - 1];
    // maxNumber(arr);
    // cout << max_temp;
    // delete[] arr;
}