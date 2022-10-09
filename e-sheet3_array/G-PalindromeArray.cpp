#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int *arr1 = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }
    int middle;
    if (size % 2 == 0)
    {
        middle = size / 2;
    }
    else
    {
        middle = (size / 2) + 1;
    }
    bool palind = false;
    int last = size - 1;
    for (int i = 0; i <= middle; i++)
    {
        if (arr1[i] == arr1[last])
        {
            palind = true;
        }
        else
        {
            palind = false;
            break;
        }

        last--;
    }

    if (palind)
    {
        cout << "YES";
    }else{
        cout << "NO";
    }
    
}