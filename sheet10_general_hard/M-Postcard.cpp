#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
#include <stack>
#include <map>
#include <queue>
using namespace std;
int main()
{

    string str;
    int finalSize;
    cin >> str >> finalSize;
    int charsNum = 0, asterisks = 0, questions = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '?')
            questions++;
        else if (str[i] == '*')
            asterisks++;
        else
            charsNum++;
    }
    /*
    hw?ap*yn?eww*ye*ar
    hwapynewwyear

    ab?a
    2

    ab?a
    1


    a?b?
    10

    a*b?
    10

    */

    // cout << str.size() << " " << charsNum << endl;
    int marks = questions + asterisks;
    if (marks == 0)
    {
        if (finalSize == str.size())
            cout << str;
        else
            cout << "Impossible";
    }
    else if (finalSize == charsNum)
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] != '?' && str[i] != '*')
                cout << str[i];
        }
    }
    else if (charsNum > finalSize)
    {
        int operations = charsNum - finalSize;

        if (operations > marks)
        {
            cout << "Impossible";
            return 0;
        }

        for (int i = 0; i < str.size(); i++)
        {
            if ((str[i + 1] == '?' || str[i + 1] == '*') && operations != 0)
            {
                operations--;
                continue;
            }
            else if (str[i] != '?' && str[i] != '*')
                cout << str[i];
        }
    }
    else if (charsNum < finalSize)
    {
        int operations = finalSize - charsNum;
        if (asterisks == 0)
        {
            cout << "Impossible";
            return 0;
        }
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '*' && str[i] != '?')
            {
                while (operations != 0)
                {
                    cout << str[i - 1];
                    operations--;
                }

                continue;
            }

            else if (str[i] != '?' && str[i] != '*')
                cout << str[i];
        }
    }
}