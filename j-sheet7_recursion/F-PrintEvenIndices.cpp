#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
// solution 1
int arr[1000];
bool first = true;
void evenIndices(int index)
{
    if (index < 0)
    {
        return;
    }
    if (!first)
    {
        cout << " ";
    }
    cout << arr[index];
    first = false;
    evenIndices(index - 2);
}

// solution 2
void print(int arr[], int size, int index)
{
    if (index > size - 1)
    {
        return;
    }
    print(arr, size, index + 2);
    cout << arr[index] << " ";
}
int main()
{
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // solution 1
    if (size % 2 == 0)
    {
        evenIndices(size - 2);
    }
    else
    {
        evenIndices(size - 1);
    }

    // solution 2
    // print(arr,size,0);
}