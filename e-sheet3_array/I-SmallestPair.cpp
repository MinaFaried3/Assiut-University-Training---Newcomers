#include <iostream>
using namespace std;
void solution1()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int size, result = 0, flag = 1;
        cin >> size;
        int *arr = new int[size];
        for (int x = 0; x < size; x++)
        {
            cin >> arr[x];
        }
        int min;
        for (int z = 1; z <= size; z++)
        { // (1,2)
            for (int x = z + 1; x <= size; x++)
            {
                result =
                    (arr[z - 1] + arr[x - 1]) + (x - z);
                if (flag == 0 && min > result)
                {
                    min = result;
                }
                if (flag)
                { // 1
                    min = result;
                    flag = 0; // 0
                }
                result = 0;
            }
        }

        cout << min << endl;
    }
}

void solution2()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int size;
        cin >> size;
        int *arr = new int[size];

        for (int i = 0; i < size; i++)
            cin >> arr[i];
        int minRes;
        for (int i = 0; i < size; i++)
            for (int j = i + 1; j < size; j++)
            {
                int result = arr[i] + arr[j] + (j + 1) - (i + 1);

                if (i == 0 && j == 1)
                {
                    minRes = result;
                    continue;
                }

                minRes = min(minRes, result);
            }
        cout << minRes << endl;
    }
}
int main()
{
}