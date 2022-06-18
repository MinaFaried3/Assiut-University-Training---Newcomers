#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string txt;
    cin >> txt;
    for (int i = 0; i < (txt.size() / 2); i++)
    {
        if (txt[i] != txt[txt.size() - 1 - i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
}