#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
void solution1()
{
    string str, temp;
    getline(cin, str);
    char ch;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ')
        {
            temp += str[i];
        }

        if ((str[i] == ' ' || i == str.size() - 1) && temp.size() != 0)
        {

            for (int j = 0; j < temp.size() / 2; j++)
            {
                ch = temp[j];
                temp[j] = temp[temp.size() - 1 - j];
                temp[temp.size() - 1 - j] = ch;
            }

            if (i == str.size() - 1)
            {
                cout << temp;
            }
            else
            {
                cout << temp << " ";
            }
            temp.clear();
        }
    }
}

void solution2()
{
    string str;
    bool space = false;
    while (cin >> str)
    {
        reverse(str.begin(), str.end());
        if (space)
        {
            cout << " ";
        }
        space = true;
        cout << str;
    }
}
int main()
{
    solution2();
}