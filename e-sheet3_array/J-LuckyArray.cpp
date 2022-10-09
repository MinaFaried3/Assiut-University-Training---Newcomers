#include <iostream>
using namespace std;
int main()
{
    int size, min, counter = 0;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            min = arr[i];
            counter = 1;
            continue;
        }

        if (min > arr[i])
        {
            min = arr[i];
            counter = 1;
            continue;
        }

        if (min == arr[i])
        {
            counter++;
        }
    }


    if (counter % 2 != 0)
    {
        cout << "Lucky";
    }
    else
    {
        cout << "Unlucky";
    }
}