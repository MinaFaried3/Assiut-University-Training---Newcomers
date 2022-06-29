#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
void define_min_max(int &min, int &max, int current)
{
    if (min > current)
    {
        min = current;
    }
    if (max < current)
    {
        max = current;
    }
}
int main()
{
    int size, min, max;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            min = max = arr[0];
        }
        else
        {
            define_min_max(min, max, arr[i]);
        }
    }

    cout << min << " " << max;
}