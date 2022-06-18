#include <iostream>
using namespace std;
int main()
{
    int size, x, index = -1;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    for (int i = 0; i < size; i++)
    {
        if (x == arr[i])
        {
            index = i;
            break;
        }
    }
    cout << index;
}