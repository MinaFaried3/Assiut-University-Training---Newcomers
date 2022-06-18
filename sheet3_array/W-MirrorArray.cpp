#include <iostream>
using namespace std;
void sol2()
{
    int size, sizeArr;
    cin >> size >> sizeArr;
    while (size--)
    { // 321
        int *arr = new int[sizeArr];
        for (int i = 0; i < sizeArr; i++)
        {
            cin >> arr[i];
        }
        for (int i = sizeArr - 1; i >= 0; i--)
        {
            cout << arr[i] << ' ';
        }
        cout << endl;
    }
}
void sol1()
{
    int rows, cols, temp;
    cin >> rows >> cols;

    int **arr = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols / 2; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[i][cols - 1 - j];
            arr[i][cols - 1 - j] = temp;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    sol2();
}
