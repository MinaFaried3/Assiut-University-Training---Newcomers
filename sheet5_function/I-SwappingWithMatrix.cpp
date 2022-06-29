#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
void swap_numbers(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
void swap_arr(int *&arr1, int *&arr2)
{
    int *temp = arr1;
    arr1 = arr2;
    arr2 = temp;
}
int main()
{
    int size, X, Y;

    cin >> size >> X >> Y;

    X--;
    Y--;

    int **arr = new int *[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = new int[size];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }

    // to swap row
    for (int i = 0; i < size; i++)
    {
        swap_numbers(arr[i][X], arr[i][Y]);
    }

    // to swap columns
    swap_arr(arr[X], arr[Y]);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j != 0)
                cout << " ";
            cout << arr[i][j];
        }
        cout << endl;
    }
}