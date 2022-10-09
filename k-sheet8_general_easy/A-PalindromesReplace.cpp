#include <iostream>
#include <string>
using namespace std;
bool check(string str)
{
    int size = str.size() / 2;
    bool result = true;
    for (int i = 0, j = str.size() - 1; i < size; i++, j--)
    {
        if (!(str[i] == str[j] || (str[i] == '?' && str[j] != '?') ||
              (str[i] != '?' && str[j] == '?') || str == "?"))
        {
            result = false;
            break;
        }
    }
    return result;
}
int main()
{
    string str;
    cin >> str;
    int size = str.size() / 2;
    if (str == "?")
    {
        cout << "a" << endl;
        return 0;
    }
    if (!check(str))
    {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 0, j = str.size() - 1; i <= size; i++, j--)
    {
        if (str[i] == '?' && str[j] != '?')
        {
            str[i] = str[j];
        }
        else if (str[i] != '?' && str[j] == '?')
        {
            str[j] = str[i];
        }
        else if (str[i] == '?' && str[j] == '?')
        {
            str[i] = str[j] = 'a';
        }
    }
    cout << str << endl;
}
