#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
// watch video
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        string txt1, txt2;
        cin >> txt1 >> txt2;
        int size = min(txt1.size(), txt2.size());
        for (int i = 0; i < size; i++)
        {
            cout << txt1[i] << txt2[i];
        }
        if (txt1.size() > txt2.size())
        {
            for (int i = size; i < txt1.size(); i++)
            {
                cout << txt1[i];
            }
        }
        else
        {
            for (int i = size; i < txt2.size(); i++)
            {
                cout << txt2[i];
            }
        }

        cout << endl;
    }
}