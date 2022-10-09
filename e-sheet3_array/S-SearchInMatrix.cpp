#include <iostream>
using namespace std;
int main()
{
    int rows, cols, num;
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

    cin >> num;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == num)
            {
                cout << "will not take number";
                return 0;
            }
        }
    }

    cout << "will take number";
}