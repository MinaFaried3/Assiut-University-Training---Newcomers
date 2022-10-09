#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
        {
            arr[i] = 1;
        }
        else if (arr[i] < 0)
        {
            arr[i] = 2;
        }
        else
        {
            arr[i] = 0;
        }
        cout << arr[i] << " ";
    }
}
