#include <iostream>

using namespace std;
int main()
{
    // int max, sum, temp, sum_val = 0;
    // cin >> max >> sum;
    // for (int i = 0; i < 1000; i++)
    // {
    //     temp = i;
    //     int first, second, third;
    //     if (i < 10)
    //     {
    //         first = i;
    //         second = 0;
    //         third = 0;
    //     }
    //     else if (i < 100)
    //     {
    //         first = temp % 10;
    //         second = (temp - first) / 10;

    //         third = 0;
    //     }
    //     else if (i < 1000)
    //     {
    //         first = temp % 10;
    //         temp = (temp - first) / 10;
    //         second = temp % 10;
    //         temp = (temp - second) / 10;
    //         third = temp;
    //     }

    //     if (first + second + third == sum && first <= max && second <= max && third <= max)
    //     {
    //         sum_val++;
    //     }
    // }
    // cout << sum_val;

    int max, sum, counter = 0;
    cin >> max >> sum;
    for (int i = 0; i <= max; i++)
    {
        for (int z = 0; z <= max; z++)
        {
            if (sum - i - z >= 0 && sum - i - z <= max)
            {
                counter++;
            }
        }
    }
    cout << counter;
}