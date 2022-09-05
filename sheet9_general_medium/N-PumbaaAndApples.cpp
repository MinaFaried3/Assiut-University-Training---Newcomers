#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
#define lol long long int
void Fast()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
}
int main()
{
    Fast();
    lol rows, cols, cases;
    cin >> rows >> cols >> cases;

    lol **arr = new lol *[rows];
    for (lol i = 0; i < rows; i++)
    {
        arr[i] = new lol[cols];
    }
    for (lol i = 0; i < rows; i++)
    {
        for (lol x = 0; x < cols; x++)
        {
            cin >> arr[i][x];
        }
    }

    lol *arrR = new lol[rows];
    lol *arrC = new lol[cols];
    for (lol i = 0; i < rows; i++)
    {
        arrR[i] = i;
    }
    for (lol i = 0; i < cols; i++)
    {
        arrC[i] = i;
    }
    char chr;
    lol n1, n2,r,c;

    while (cases--)
    {
        cin >> chr;

        cin >> n1 >> n2;
        n1--, n2--;
        if (chr == 'g')
        {
            r= arrR[n1];
            c= arrC[n2];
            cout << arr[r][c] << "\n";
        }
        else if (chr == 'r')
        {
            swap(arrR[n1], arrR[n2]);
        }
        else
        {
            swap(arrC[n1], arrC[n2]);
        }
    }
}