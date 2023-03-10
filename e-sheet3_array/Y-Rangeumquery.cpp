#include <iostream>
using namespace std;
void solution1()
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

void solution2()
{
    int size, query;
    cin >> size >> query;

    long long *arr = new long long[size];
    long long sum = 0;
    for (int i = 0; i < size; i++)
    {
        long long num;
        cin >> num;
        sum += num;
        arr[i] = sum;
    }

    while (query--)
    {
        int left, right;
        cin >> left >> right;

        left--;
        right--;

        if (left == 0)
        {
            cout << arr[right] << endl;
            continue;
        }

        cout << arr[right] - arr[left - 1] << endl;
    }
}
int main()
{
    solution2();
}
