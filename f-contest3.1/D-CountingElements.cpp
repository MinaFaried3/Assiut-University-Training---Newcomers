#include <iostream>
#include <algorithm>

using namespace std;
// watch the video contest  

int main()
{
    int size, count = 0;
    cin >> size;

    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] + 1 == arr[j])
            {
                count++;
                break;
            }
        }
    }
    cout << count;
}