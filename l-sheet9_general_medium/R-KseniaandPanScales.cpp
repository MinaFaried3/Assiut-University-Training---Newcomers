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
const int maxn = 1e6 + 10;
char ch[maxn], c[maxn];
char a[maxn], b[maxn];
void solution2()
{
    string str;
    cin >> str;

    string add;
    cin >> add;

    int scaleIndex;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '|')
        {
            scaleIndex = i;
            break;
        }
    }
    scaleIndex++;
    bool valid = false;
    int afterSize, beforeSize, strSize = str.size(), addSize = add.size();
    beforeSize = scaleIndex - 1;
    afterSize = strSize - scaleIndex;
    string result = "";
    if (scaleIndex > strSize / 2)
    {

        if (addSize + afterSize == beforeSize)
        {
            str += add;
            result = str;
            valid = true;
        }
    }
    else if (scaleIndex < strSize / 2)
    {

        if (addSize + beforeSize == afterSize)
        {

            result += add;
            result += str;
            valid = true;
        }
    }

    if (!valid)

        cout << "Impossible" << endl;
    else
        cout << result;
}
int solution1()
{
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    cin >> ch;
    cin >> c;
    int l1 = strlen(ch);
    int l2 = strlen(c);
    int la = 0, lb = 0;
    for (int i = 0;; i++)
    {
        if (ch[i] == '|')
            break;
        a[la++] = ch[i];
    }
    for (int i = la + 1; i < l1; i++)
        b[lb++] = ch[i];
    int La = la, Lb = lb;
    if (l2 < abs(la - lb))
        cout << "Impossible\n";
    else
    {
        if ((l1 - 1 + l2) % 2)
        {
            cout << "Impossible\n";
        }
        else if (la == lb)
        {
            if (l2 % 2)
                cout << "Impossible\n";
            else
            {
                for (int i = 0; i <= (l2 - 1) / 2; i++)
                    cout << c[i];
                cout << a << "|" << b;
                for (int i = (l2 - 1) / 2 + 1; i < l2; i++)
                    cout << c[i];
                cout << endl;
            }
        }
        else if (la > lb)
        {
            if (l2 == la - lb)
                cout << a << "|" << b << c << endl;
            else
            {
                for (int i = 0; i < (la + lb + l2) / 2 - la; i++)
                    cout << c[i];
                cout << a << "|" << b;
                for (int i = (la + lb + l2) / 2 - la; i < l2; i++)
                    cout << c[i];
                cout << endl;
            }
        }
        else if (la < lb)
        {
            if (l2 == lb - la)
                cout << a << c << "|" << b << endl;
            else
            {
                for (int i = 0; i < (l1 - 1 + l2) / 2 - la; i++)
                    cout << c[i];
                cout << a << "|" << b;
                for (int i = (l1 - 1 + l2) / 2 - la; i < l2; i++)
                    cout << c[i];
                cout << endl;
            }
        }
    }
    return 0;
}
int main()
{
    solution1();
}