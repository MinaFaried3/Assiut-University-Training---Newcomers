#include <iostream>
#include <algorithm>
using namespace std;
int binarySearch(int arr[], int start, int end, int searchNum)
{
    // start became bigger than end break the loop
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // int mid = (end + start) / 2;
        if (arr[mid] == searchNum)
        {
            return mid;
        }
        // 1 3 4
        else if (arr[mid] < searchNum)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}
int main()
{
    int size, cases, temp;
    cin >> size >> cases;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + size);

    while (cases--)
    {
        int num;
        cin >> num;

        int search = binarySearch(arr, 0, size - 1, num);
        if (search == -1)
        {
            cout << "not found" << endl;
        }
        else
        {
            cout << "found" << endl;
        }
    }
}