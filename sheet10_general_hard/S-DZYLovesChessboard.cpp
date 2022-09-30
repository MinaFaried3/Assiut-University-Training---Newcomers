#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
#include <map>
#include <stack>
#include <queue>
using namespace std;
#define lol long long int
#define endl '\n'
int main()
{
    int rows, cols;
    cin >> rows >> cols;

    bool isB = true;    char **arr = new char *[rows];
    for (int i = 0; i < rows; i++)
        arr[i] = new char[cols];

    for (int i = 0; i < rows; i++)
        for (int x = 0; x < cols; x++)
            cin >> arr[i][x];

    for (int i = 0; i < rows; i++)
    {
        for (int x = 0; x < cols; x++)
        {
            if (arr[i][x] == '.')
            {
                if ((i + x) % 2 == 0)
                    arr[i][x] = 'W';
                else
                    arr[i][x] = 'B';
            }

            cout << arr[i][x];
        }
        cout << endl;
    }
}