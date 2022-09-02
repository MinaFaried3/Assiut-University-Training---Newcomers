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
    int count;
    cin >> count;

    if (count == 1)
    {
        cout << count;
        return 0;
    }
    long long *arr = new long long[count];
    long long sum = 0;
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + count);


    int halfSum = sum / 2;
    int taken = 0;
    int coins = 0;
    for (int i = count - 1; i > -1; i--)
    {
        taken += arr[i];
        coins++;
        if (taken > halfSum)
        {

            break;
        }
    }

    cout << coins;
}