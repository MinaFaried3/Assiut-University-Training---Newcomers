#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
void shift_right(int *&arr, int times, int size)
{
    int new_times = times % size;
    for (int i = 0; i < new_times; i++)
    {
        int *temp_arr = new int[size];
        temp_arr[0] = arr[size - 1];
        for (int j = 1; j < size; j++)
        {
            temp_arr[j] = arr[j - 1];
        }
        arr = temp_arr;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void shift_right2(int *arr, int times, int size)
{
    int new_times = times % size;
    for (int i = size - new_times; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < size - new_times; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size, times;
    cin >> size >> times;

    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    shift_right(arr, times, size);
}