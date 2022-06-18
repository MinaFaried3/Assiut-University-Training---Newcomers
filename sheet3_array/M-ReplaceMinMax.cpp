#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    int min, max, min_index, max_index, temp;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            min = max = arr[i];
            min_index = max_index = 0;
        }

        if (min > arr[i])
        {
            min = arr[i];
            min_index = i;
        }
        if (max < arr[i])
        {
            max = arr[i];
            max_index = i;
        }
    }

    temp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = temp;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}