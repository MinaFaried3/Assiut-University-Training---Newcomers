#include <iostream>
using namespace std;
int main()
{
    int size, sum1 = 0, sum2 = 0;
    cin >> size;
    int **arr = new int *[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = new int[size];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
            if (i == j)
            {
                sum1 += arr[i][j];
            }
            if (j == size - 1 - i)
            {
                {

                    sum2 += arr[i][j];
                }
            }
        }
    }

    cout << abs(sum1 - sum2);
}
