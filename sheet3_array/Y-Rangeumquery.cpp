#include <iostream>
using namespace std;
int main()
{
    int size, range;
    cin >> size >> range;

    long long *arr = new long long[size];
    long long *arrSum = new long long[size];
    long long sumArrIndex;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];

        if (i == 0)
        {
            sumArrIndex = arr[i];
            arrSum[i] = sumArrIndex;
        }
        else
        {
            sumArrIndex += arr[i];
            arrSum[i] = sumArrIndex;
        }
    }

    long long start, end, sum = 0;

    while (range--)
    {
        cin >> start >> end;

        if (start == 1)
        {
            sum = arrSum[end - 1];
        }
        else
        {
            sum = arrSum[end - 1] - arrSum[start - 2];
        }

        cout << sum << endl;
    }
}
