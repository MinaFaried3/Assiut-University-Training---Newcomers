#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string txt;
    cin >> txt;
    for (int i = 0; i < txt.size(); i++)
    {
        if (txt[i] == ',')
        {
            txt[i] = ' ';
        }
        else if (txt[i] >= 'a' && txt[i] <= 'z')
        {
            txt[i] = txt[i] - 32;
        }
        else if (txt[i] >= 'A' && txt[i] <= 'Z')
        {
            txt[i] = txt[i] + 32;
        }
    }
    cout << txt;
}
