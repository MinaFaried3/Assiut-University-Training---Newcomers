#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cin >> rows >> cols;

    char arr[101][101];

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    int rowIn, columnIn;
    cin >> rowIn >> columnIn;
    if (
        // in the same row
        arr[rowIn][columnIn - 1] != '.' &&
        arr[rowIn][columnIn + 1] != '.' &&
        // in the upper row
        arr[rowIn - 1][columnIn - 1] != '.' &&
        arr[rowIn - 1][columnIn] != '.' &&
        arr[rowIn - 1][columnIn + 1] != '.' &&
        // in the below row
        arr[rowIn + 1][columnIn - 1] != '.' &&
        arr[rowIn + 1][columnIn] != '.' &&
        arr[rowIn + 1][columnIn + 1] != '.'

    )
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}