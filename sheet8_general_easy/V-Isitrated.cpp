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

    int *arr1 = new int[size];
    int *arr2 = new int[size];
    bool isRated = false, isUnRated = false, isMaybe = false;
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i] >> arr2[i];

        if (arr1[i] != arr2[i] && !isRated)
        {
            isRated = true;
        }
        if (arr1[i] == arr2[i] && i != 0)
        {
            if (!isUnRated && (arr2[i] <= arr2[i - 1]))
            {
                isMaybe = true;
            }
            else
            {
                isUnRated = true;
            }
        }
    }

    if (isRated)
        cout << "rated";
    else if (isUnRated)
        cout << "unrated";
    else if (isMaybe)
        cout << "maybe";
}