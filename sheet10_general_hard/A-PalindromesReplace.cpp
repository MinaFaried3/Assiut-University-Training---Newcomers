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

bool isPalindRome(string str)
{
    for (int i = 0, x = str.size() - 1; i < str.size() /2 ; i++, x--)
    {
        if (str[i] != str[x])
            return false;
    }
    return true;
}
int main()
{
    string str;
    cin >> str;

    bool valid = true;
    for (int i = 0, x = str.size() - 1; i < str.size() ; i++, x--)
    {
        if ((str[i] != '?' && str[x] != '?') && (str[x] != str[i]))
        {
            valid = false;
            break;
        }

        if (str[i] != '?' && str[x] == '?')
        {
            str[x] = str[i];
        }
        else if (str[i] == '?' && str[x] != '?')
        {
            str[i] = str[x];
        }
        else if (str[i] == '?' && str[x] == '?')
        {
            str[i] = 'a';
            str[x] = 'a';
        }
    }
    valid = isPalindRome(str);
    if (valid)
        cout << str;
    else
        cout << -1;
}