#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string txt;
    cin >> txt;
    sort(txt.begin(), txt.end());
    int count = 0;
    char x;
    for (int i = 0; i < txt.size(); i++)
    {
        if (i == 0)
        {
            x = txt[i];
            count++;
        }
        else if (txt[i] == x)
        {
            count++;
        }
        else if (txt[i] != x)
        {
            cout << x << " : " << count << endl;
            x = txt[i];
            count = 1;
        }
    }
    cout << x << " : " << count << endl;


    //  another solution

    // int size = txt.size(); // 5
    // for (int i = 0; i < size; i++)
    // {                    // i = 3
    //     char c = txt[i]; // e
    //     int counter = 1;
    //     while (txt[i] == txt[++i])
    //     {              // i =
    //         counter++; // 2
    //     }
    //     i--; // i =1
    //     cout << c << " :" << counter << endl;
    // }
}