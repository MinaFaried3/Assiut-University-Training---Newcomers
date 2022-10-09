#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
#define lol long long int
lol arr[27] = {0};
bool isPalindrome(string str)
{
    for (int i = 0; i < str.size() / 2; i++)
    {
        if (str[i] != str[str.size() - 1 - i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string str;
    cin >> str;

    if (!isPalindrome(str))
    {
        cout << str.size() << endl;
    }
    else
    {
    
        lol counter = 0;
        lol index;

        for (int i = 0; i < str.size(); i++)
        {
            index = str[i];
            arr[index]++;

            if (arr[index] == 1)
            {
                counter++;
            }
        }
        if (counter == 1)
            cout << 0 << endl;
        else
            cout << str.size() - 1 << endl;
    }
}