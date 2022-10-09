#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'E' && str[i + 1] == 'G' && str[i + 2] == 'Y' && str[i + 3] == 'P' && str[i + 4] == 'T')
        {
            cout << " ";
            i += 4;
            continue;
        }

        cout << str[i];
    }
}