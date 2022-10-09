#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string str, test = "hello", temp;
    cin >> str;
    int index = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == test[index])
        {
            temp.push_back(str[i]);
            index++;
        }
    }
    if (temp == test)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}