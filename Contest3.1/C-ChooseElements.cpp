#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size, maxSum;
    cin >> size >> maxSum;

    long long *arr = new long long[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    reverse(arr, arr + size);

    long long sum = 0;
    for (int i = 0; i < maxSum; i++)
    {
        if (arr[i] < 0)
            break;
        sum += arr[i];
    }
    cout << sum;
}
