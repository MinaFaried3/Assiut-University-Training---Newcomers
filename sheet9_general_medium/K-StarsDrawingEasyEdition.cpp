#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
int rows, cols;
const int size_ = 1e3;
char arr[size_][size_], visit[size_][size_];
vector<tuple<int, int, int>> result;
int change(int row, int column, int move)
{
    int colMove = column + move;
    int col = column;
    while (col <= colMove)
    {
        visit[row][col] = '1';
        col++;
    }
    colMove = column - move;
    col = column;
    while (col >= colMove)
    {
        visit[row][col] = '1';
        col--;
    }
    int rowMove = row + move;
    int ro = row;
    while (ro <= rowMove)
    {
        visit[ro][column] = '1';
        ro++;
    }
    rowMove = row - move;
    ro = row;
    while (ro >= rowMove)
    {
        visit[ro][column] = '1';
        ro--;
    }
}

int countStars(int r, int c)
{
    int stars = 0, up = 0, down = 0, left = 0, right = 0;
    int row = r, col = c;
    while (row--)
    {
        if (arr[row][col] == '*')
            up++;
        else
            break;
    }
    row = r, col = c;
    while (row++)
    {
        if (arr[row][col] == '*')
 
            down++;
        else
            break;
    }
    row = r, col = c;
    while (col--)
    {
        if (arr[row][col] == '*')
            left++;
        else
            break;
    }
    row = r, col = c;
    while (col++)
    {
        if (arr[row][col] == '*')
            right++;
        else
            break;
    }
    stars = min(up, min(down, min(left, right)));
    return stars;
}
int main()
{
 
    cin >> rows >> cols;
 
 
 
    for (int i = 0; i < rows; i++)
    {
 
        for (int x = 0; x < cols; x++)
        {
            cin >> arr[i][x];
 
            visit[i][x] = '0';
        }
    }
    int stars;
 
    for (int i = 1; i < rows - 1; i++)
    {
 
        for (int x = 1; x < cols - 1; x++)
        {
            if (arr[i][x] == '*')
            {
                stars = countStars(i, x);
                if (stars > 0)
                {
 
                    result.push_back({i, x, stars});
                    change(i, x, stars);
                }
            }
        }
    }
    for (int i = 0; i < rows; i++)
    {
 
        for (int x = 0; x < cols; x++)
        {
            if (arr[i][x] == '*')
            {
                if (visit[i][x] != '1')
                {
                    cout << -1;
                    return 0;
                }
            }
        }
    }
 
    cout << result.size() << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << get<0>(result[i]) + 1 << " " << get<1>(result[i]) + 1 << " " << get<2>(result[i]) << endl;
    }
}