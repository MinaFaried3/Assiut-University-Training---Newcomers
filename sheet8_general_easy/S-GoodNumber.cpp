#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
/*
    10 6
    1234560

    2 1
    1
    10
*/
int main()
{
    int cases, range, result = 0;
    cin >> cases >> range; // 6
    string myRange = "0123456789";
    while (cases--)
    {
        int counter = 0;
        string str;
        cin >> str;
        for (int z = 0; z <= range; z++)
        {
            if (str.find(myRange.substr(z, 1)) != string::npos)
            {
                counter++;
            }
        }
        if (counter == range + 1)
        {
            result++;
        }
    }

    cout << result;
}