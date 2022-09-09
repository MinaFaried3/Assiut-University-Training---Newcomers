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
    lol size;
    cin >> size;
    lol *arr = new lol[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + size);
    bool valid = false;
    for (int i = 0; i < size - 2; i++)
    {
        if ((arr[i] + arr[i + 1] > arr[i + 2]) && (arr[i + 1] + arr[i + 2] > arr[i]) && (arr[i + 2] + arr[i] > arr[i + 1]))
        {
            valid = true;
            break;
        }
    }
    if (valid)
        cout << "YES";
    else
        cout << "NO";
}