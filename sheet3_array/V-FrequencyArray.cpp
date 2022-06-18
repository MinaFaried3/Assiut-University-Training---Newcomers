#include <iostream>
using namespace std;
int main()
{
    int size, counter;
    cin >> size >> counter;
    int arr[100001] = {0};
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        if (arr[num] == 0)
        {
            arr[num] = 1;
        }
        else
        {
            arr[num] = arr[num] + 1;
        }
    }
    for (int i = 1; i <= counter; i++)
    {
        cout << arr[i] << endl;
    }
}