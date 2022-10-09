#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size / 2; i++)
    {
        cout << arr[i] << " " << arr[size - i - 1] << " ";
    }
    if (size % 2 != 0)
    {
        cout << arr[size / 2];
    }
}