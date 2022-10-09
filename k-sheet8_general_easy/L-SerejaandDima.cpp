#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int *nums = new int[size];

    int player1 = 0, player2 = 0;

    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    int role = 0, start = 0, end = size - 1, max;
    // 4 1 2 10
    while (start <= end)
    {
        if (nums[start] >= nums[end])
        {
            max = nums[start];
            start++;
        }
        else
        {
            max = nums[end];
            end--;
        }

        if (role % 2 == 0)
        {
            player1 += max;
        }
        else
        {
            player2 += max;
        }

        role++;
    }

    cout << player1 << " " << player2 << endl;
}