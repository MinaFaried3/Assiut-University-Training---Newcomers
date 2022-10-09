#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
    string main = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string str, result = "";
    char chr;
    cin >> chr >> str;

    for (int i = 0; i < str.size(); i++)
    {
        int index = main.find(str[i]);
        if (chr == 'R')
        {
            result += main[index - 1];
        }
        else
        {
            result += main[index + 1];
        }
    }
    cout << result << endl;
}