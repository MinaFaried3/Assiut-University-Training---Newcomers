#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    int num;
    for (int i = 1; i <= size; i++)
    {
        cin >> num;
        arr[num] = i;
    }

    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
}