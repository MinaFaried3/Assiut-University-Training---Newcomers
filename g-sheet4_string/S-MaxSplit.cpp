#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    char arr[1000][1000];
    string str;
    cin >> str;
    int counts = 0;
    int column = 0, row = 0, r = 0, l = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'L')
        {
            l++;
            arr[row][column] = 'L';
        }
        else
        {
            r++;
            arr[row][column] = 'R';
        }
        column++;
        if (r == l)
        {
            counts++;
            column = 0;
            row++;
            r = l = 0;
        }
    }
    cout << counts << endl;
    for (int i = 0; i < 1000; i++)
    {
        if (arr[i][0] == 'L' || arr[i][0] == 'R')
        {
            cout << arr[i] << endl;
            counts--;
        }

        if (counts == 0)
            break;
    }
}