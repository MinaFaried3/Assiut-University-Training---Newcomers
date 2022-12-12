#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
void solution1()
{
    int size;
    cin >> size;
    if (size == 0)
    {
        cout << size;
        return;
    }
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + size);

    int distinct = 1;
    for (int i = 1; i < size; i++)
    {
        //  1 2 3 6 6
        if (arr[i] != arr[i - 1])
        {
            distinct++;
        }
    }
    cout << distinct;
}
void solution2()
{
    const int maxSize = 1001;
    int size, arr[maxSize];
    cin >> size;
    int posNums[maxSize] = {0}, negativeNums[maxSize] = {0}, distinct = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] >= 0)
            posNums[arr[i]]++;
        else
            negativeNums[abs(arr[i])]++;
    }

    for (int i = 0; i < maxSize; i++)
    {
        if (posNums[i] >= 1)
        {

            distinct++;
        }
        if (negativeNums[i] >= 1)
        {

            distinct++;
        }
    }
    cout << distinct;
}
void solution3()
{
    const int maxSize = 1000;
    int size, arr[maxSize + 1];
    cin >> size;
    int distinctNums[maxSize + maxSize + 1] = {0}, distinct = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        distinctNums[arr[i] + 1000]++;
    }

    for (int i = 0; i < maxSize + maxSize + 1; i++)
    {
        if (distinctNums[i] >= 1)
        {
            distinct++;
        }
    }
    cout << distinct;
}

int main()
{
    solution3();
}