#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
#define lol long long int
string ABC{"ABC"};
int abc[3]{0};

void check(string str)
{
    char x = str[0];
    char chr = str[1];
    char y = str[2];

    if (chr == '>')
    {
        for (int i = 0; i < 3; i++)
        {
            if (ABC[i] == x)
            {
                abc[i]++;
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            if (ABC[i] == y)
            {
                abc[i]++;
                break;
            }
        }
    }
}
void findMax()
{
    int min = 0;
    for (int i = 1; i < 3; i++)
    {
        if (abc[min] > abc[i])
        {
            min = i;
        }
    }
    cout << ABC[min];
    abc[min] = 10000;
}

bool isEqual()
{
    if (abc[0] == abc[1] || abc[1] == abc[2] || abc[0] == abc[2])
    {
        return true;
    }
    return false;
}
int main()
{
    string str;
    for (int i = 0; i < 3; i++)
    {
        cin >> str;
        check(str);
    }

    if (isEqual())
    {
        cout << "Impossible";
    }
    else
    {

        findMax();
        findMax();
        findMax();
    }
}