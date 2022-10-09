#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int size;
    cin >> size;
    if(size == 0){
        cout << size;
        return 0;
    }
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + size);

    int distinct = 1;
    for (int i = 1; i < size ; i++)
    {
        //  1 2 3 6 6
        if (arr[i] != arr[i - 1])
        {
            distinct++;
        }
        }
    cout << distinct;
}