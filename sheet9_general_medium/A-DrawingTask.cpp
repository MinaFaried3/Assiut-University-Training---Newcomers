#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>

using namespace std;
int main()
{
    int rows, cols, cases;
    cin >> rows >> cols >> cases;

    char **arr = new char *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new char[cols];

        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = '.';
        }
    }

    int r1, r2, c1, c2;
    char chr;

    while (cases--)
    {
        cin >> r1 >> c1 >> r2 >> c2;
        cin >> chr;
        /*
            4,0
            5,5

        */

        r1--, r2--, c1--, c2--;

        for (int i = min(r1, r2); i <= max(r1, r2); i++)
        {
            for (int x = min(c1, c2); x <= max(c2, c1); x++)
            {
                arr[i][x] = chr;
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}