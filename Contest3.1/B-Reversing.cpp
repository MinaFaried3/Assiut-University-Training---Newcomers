#include <iostream>
using namespace std;
void reverse(int arr[], int index)
{
    int temp;
    for (int i = 0; i < index / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[index - 1 - i];
        arr[index - 1 - i] = temp;
    }
}
int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            reverse(arr, i);
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
