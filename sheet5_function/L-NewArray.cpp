#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
void NewArr(int *arr, int size)
{

    for (int i = 0; i < (size * 2); i++)
    {
        cin >> arr[i];
    }
    for (int i = (size * 2) / 2; i < (size * 2); i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < (size * 2) / 2; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int size;
    cin >> size;
    int *arr = new int[size * 2];
    NewArr(arr, size);
}