#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;

long long sum(long long arr[], int index)
{
    if (index == -1)
    {
        return 0;
    }

    return arr[index] + sum(arr, index - 1);
}

int main()
{
    int size;
    cin >> size;
    long long *arr = new long long[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << sum(arr, size - 1);

    delete[] arr;
}