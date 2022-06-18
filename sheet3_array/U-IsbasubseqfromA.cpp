#include <iostream>
using namespace std;
int main()
{
    int size, sub_size;
    cin >> size >> sub_size;
    int *arr = new int[size];
    int *sub_arr = new int[sub_size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < sub_size; i++)
    {
        cin >> sub_arr[i];
    }
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (sub_arr[index] == arr[i])
        {
            index++;
        }
    }
    if (index == sub_size)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}