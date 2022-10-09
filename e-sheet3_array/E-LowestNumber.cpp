#include <iostream>
using namespace std;
int main()
{
    int size, min, index;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] < min || i == 0)
        {
            min = arr[i];
            index = i;
        }
    }

    cout << min << " " << index + 1 << endl;
}