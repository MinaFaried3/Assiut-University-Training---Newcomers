#include <iostream>
using namespace std;
int main()
{

    int size;
    cin >> size;
    bool flag = false;
    int *arr1 = new int[size];
    int *arr2 = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < size; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = true;
                arr2[j] = 0;
                break;
            }
            else
            {
                flag = false;
            }
        }
        if (!flag)
        {
            break;
        }
    }
    // to avoid this trip ..sort the array make it better
    for (int j = 0; j < size; j++)
    {
        if (arr2[j] != 0)
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}