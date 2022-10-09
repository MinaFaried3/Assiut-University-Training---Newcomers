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
void fast()
{
    cin.tie(0);
    cout.sync_with_stdio(0);
}

enum dir
{
    RIGHT = 0,
    DOWN,
    LEFT,
    UP,
};
int dir_r[] = {0, 1, 0, -1};
int dir_c[] = {1, 0, -1, 0};
const int size_ = 5;

void spiral(int arr[size_][size_], int size)
{
    cout << "Case size = " << size << ": \t" << endl;
    int itemCounts = 0, r = 0, c = 0, steps = size, dir = 0;
    while (itemCounts < size * size)
    {
        for (int x = 0; x < 4 && itemCounts < size * size; x++) // 4 because 4 directions up,left,right,down
        {
            int currentSteps = steps - 1; // size-1 steps per direction
            if (x == 3)                   // except last dir ,size -2
            {
                --currentSteps;
            }
            for (int i = 0; i < currentSteps && itemCounts < size * size; i++) // move in specific direction
            {
                cout << arr[r][c] << " ";
                itemCounts++, r += dir_r[dir], c += dir_c[dir]; // move step
            }
            dir = (dir + 1) % 4; // change direction- wrap
        }

        cout << arr[r][c] << " "; // Special handling for last element

        itemCounts++, r += dir_r[dir], c += dir_c[dir]; // move to new (size-2)x(size-2) matrix
        steps -= 2;
    }
    cout << endl;
}

void solution1()
{
    lol ROWS, COLS;
    cin >> ROWS >> COLS;

    lol **arr = new lol *[ROWS];

    for (lol i = 0; i < ROWS; i++)
        arr[i] = new lol[COLS];

    for (lol r = 0; r < ROWS; r++)
        for (lol c = 0; c < COLS; c++)
            cin >> arr[r][c];

    lol row = 0, col = 0;

    while (row < ROWS && col < COLS)
    {
        for (lol c = col; c < COLS; c++)
            cout << arr[row][c] << " ";
        row++;

        for (lol r = row; r < ROWS; r++)
            cout << arr[r][COLS - 1] << " ";
        COLS--;

        if (row < ROWS)
        {
            for (lol c = COLS - 1; c >= col; c--)
            {
                cout << arr[ROWS - 1][c] << " ";
            }
            ROWS--;
        }

        if (col < COLS)
        {
            for (lol r = ROWS - 1; r >= row; r--)
            {
                cout << arr[r][col] << " ";
            }
            col++;
        }
    }
}

int main()
{
    fast();

    solution1();
}
