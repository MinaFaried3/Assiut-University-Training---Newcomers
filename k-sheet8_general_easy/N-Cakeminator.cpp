#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
void solution1()
{
    int rows, cols;
    cin >> rows >> cols;
    string *arr = new string[rows];
    for (int i = 0; i < rows; i++)
    {
        cin >> arr[i];
    }

    int cakeNum = 0, colsNum = 0, rowsNum = 0;
    bool isHaveS = false;
    for (int i = 0; i < rows; i++)
    {
        for (int x = 0; x < cols; x++)
        {
            if (arr[i][x] == 'S')
            {
                isHaveS = true;
                break;
            }
        }

        if (!isHaveS)
        {
            cakeNum += cols;
            rowsNum++;
        }
        isHaveS = false;
    }

    for (int i = 0; i < cols; i++)
    {
        for (int x = 0; x < rows; x++)
        {
            if (arr[x][i] == 'S')
            {
                isHaveS = true;
                break;
            }
        }

        if (!isHaveS)
        {
            cakeNum += rows;
            colsNum++;
        }
        isHaveS = false;
    }

    if (rowsNum != 0)
    {
        cakeNum -= (colsNum * rowsNum);
    }

    cout << cakeNum;
}

void solution2()
{
    int row, col;
    cin >> row >> col;
    int *rowIndexes = new int[row];
    int *colIndexes = new int[col];

    for (int i = 0; i < row; i++)
    {
        string line;

        // "S..."
        // "...."
        //  "..S."
        cin >> line;
        for (int z = 0; z < col; z++)
        {
            if (line[z] == 'S')
            {
                rowIndexes[i] = 1;
                colIndexes[z] = 1;
            }
        }
    }
    int cakeNum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int z = 0; z < col; z++)
        {
            if (rowIndexes[i] != 1 || colIndexes[z] != 1)
            {
                cakeNum++;
            }
        }
    }
    cout << cakeNum << endl;
}
int main()
{
    solution2();
}