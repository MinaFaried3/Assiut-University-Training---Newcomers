#include <iostream>
using namespace std;
int main()
{
    int size, counter = 0;
    bool flag = true;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 != 0)
        {
            flag = false;
        }
    }
    while (flag)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] % 2 != 0)
            {
                flag = false;
                break;
            }
            arr[i] /= 2; 
        }
        if (flag)
        {
            ++counter;
        }
        else
        {
            break;
        }
    }

    cout << counter;
}