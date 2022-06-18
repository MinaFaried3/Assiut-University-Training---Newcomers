#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        string txt;
        cin >> txt;
        bool flag = true;
        for (int i = 0; i < txt.size(); i++)
        {
            string test;
            test.push_back(txt[i]);
            test.push_back(txt[i + 1]);
            test.push_back(txt[i + 2]);
            if (test == "010" || test == "101")
            {
                cout << "Good" << endl;
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "Bad" << endl;
        }
    }
}