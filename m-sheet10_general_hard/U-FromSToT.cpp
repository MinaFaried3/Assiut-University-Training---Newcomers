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

bool check(string str1, string str2)
{
    if (str1.size() > str2.size())
        return false;

    for (int i = 0, j = 0; i < str2.size(); i++)
    {
        if (str2[i] == str1[j])
            j++;

        if (j == str1.size())
            return true;
    }

    return false;
}

void solution1()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        string str1, str2, help;
        string minStr, maxStr, result = "";

        cin >> str1 >> str2 >> help;

        if (!check(str1, str2))
        {
            cout << "NO" << endl;
            continue;
        }

        maxStr = str2;
        minStr = str1;

        int x = 0;

        for (int i = 0; i < maxStr.size(); i++)
        {
            if (maxStr[i] == minStr[x] && x != minStr.size())
            {
                result.push_back(maxStr[i]);
                x++;
                continue;
            }
            int index = help.find(maxStr[i]);
            if (index != string::npos)
            {
                help[index] = '?';
                result.push_back(maxStr[i]);
            }
            else
                goto end;
        }

        // cout << "result = " << result << endl;

        if (result == maxStr)
            cout << "YES" << endl;
        else
        end:
            cout << "NO" << endl;
    }
}

void solution2()
{
    int tests;
    cin >> tests;

    while (tests--)
    {
        string str1, str2, help;
        cin >> str1 >> str2 >> help;

        if (!check(str1, str2))
        {
            cout << "NO" << endl;
            continue;
        }

        map<char, int> mp1, mp2;

        for (char c : str1)
            mp1[c]++;
        for (char c : help)
            mp1[c]++;
        for (char c : str2)
            mp2[c]++;

        map<char, int>::iterator itr;
        for (itr = mp2.begin(); itr != mp2.end(); ++itr)
        {
            char chr = itr->first;
            int times = itr->second;

            if (mp1[chr] < times)
            {
                goto end;
            }
        }

        cout << "YES" << endl;
        continue;

    end:
        cout << "NO" << endl;
    }
}
int main()
{
    solution2();
}