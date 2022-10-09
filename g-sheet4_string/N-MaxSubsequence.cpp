#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int size;
    cin >> size;
    string str;
    cin >> str;
    char temp = str[0];
    int counter = 1;

    for (int i = 1; i < size; i++)
    {
        if (str[i] != temp)
        {
            counter++;
            temp = str[i];
        }
    }

    cout << counter;
}