#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
// watch video
int main()
{
    string str;
    getline(cin, str);
    int counter = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if ( (str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90) )
        {
            if (str[i + 1] == ' ' || str[i + 1] == '!' || str[i + 1] == '?' || str[i + 1] == '.' || str[i + 1] == ',')
            {
                counter++;
            }
            else if (i == str.size() - 1)
            {
                counter++;
            }
        }
    }
    cout << counter;
}