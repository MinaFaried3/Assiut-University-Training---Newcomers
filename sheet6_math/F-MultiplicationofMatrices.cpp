#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int row1 , col1 ;
    cin >> row1 >> col1;

    int **arr1 = new int *[row1];
    for (int i = 0; i < row1; i++)
    {
        arr1[i] = new int[col1];
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> arr1[i][j];
        }
    }
    int row2, col2 ;
    cin >> row2 >> col2;

    int **arr2 = new int *[row2];
    for (int i = 0; i < row2; i++)
    {
        arr2[i] = new int[col2];
    }

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> arr2[i][j];
        }
    }


    long long result = 0;
    /*
        1 2      3 4
        2 1      4 3   
    */ 

    for (int i = 0; i < row1; i++)
    {
        for (int z = 0; z < col2; z++)
        {
            for (int x = 0; x < row2; x++)
            {
                result += (arr1[i][x] * arr2[x][z]);
            }

            cout << result << " ";
            result = 0;
        }
        result = 0;
        cout << endl;
    }
}