#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    string str1, str2;
    int counter = 1;

    cin >> str1 >> str2;
    int j = 0;
    for (int i = 0; i < str2.size(); i++)
    {
        if (str1[j] == str2[i])
        {
            counter++;
            j++;
        }
    }
    cout << counter << endl;
}