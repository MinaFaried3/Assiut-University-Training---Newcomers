#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int rows, cols;

int arr1[100][100], arr2[100][100], result[100][100];
void sum_arr(int rowIndex, int colIndex)
{
    if (rowIndex == rows || colIndex == cols)
    {
        return;
    }

    if (colIndex < cols - 1)
    {
        sum_arr(rowIndex, colIndex + 1);
    }
    else
    {
        sum_arr(rowIndex + 1, 0);
    }

    result[rowIndex][colIndex] = arr1[rowIndex][colIndex] + arr2[rowIndex][colIndex];
}

int main()
{
    cin >> rows >> cols;

    for (int i = 0; i < rows; i++)
    {

        for (int x = 0; x < cols; x++)
        {
            cin >> arr1[i][x];
        }
    }
    for (int i = 0; i < rows; i++)
    {

        for (int x = 0; x < cols; x++)
        {
            cin >> arr2[i][x];
        }
    }

    sum_arr(0, 0);
    for (int i = 0; i < rows; i++)
    {

        for (int x = 0; x < cols; x++)
        {
            cout << result[i][x] << " ";
        }
        cout << endl;
    }
}