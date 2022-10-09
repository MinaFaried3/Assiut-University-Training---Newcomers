#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
void insertion_sort(string &arr)
{
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        int copy = arr[i];
        int x = i - 1;

        for (; x >= 0; --x)
        {
            if (arr[x] < copy)
            {
                break;
            }

            arr[x + 1] = arr[x];
        }

        arr[x + 1] = copy;
    }
}
int main()
{
    string str;
    cin >> str;

    string arr = "";

    int counts = 0, index = 0;

    while (counts <= ((str.size() / 2)))
    {
        arr.push_back(str[index]);
        index += 2;
        counts++;
    }

    insertion_sort(arr);

    index = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (i % 2 == 0)
        {
            cout << arr[index++];
        }
        else
        {
            cout << '+';
        }
    }
}