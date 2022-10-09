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
    int score = 0;

    for (int i = 0; i < str.size(); i++)
    {

        switch (str[i])
        {
        case 'V':
            score += 5;
            break;
        case 'W':
            score += 2;
            break;
        case 'X':
            if (i != str.size() - 1)
            {
                // str[i + 1] = '0';
                i++;
            }
            break;
        case 'Y':
            if (i != str.size() - 1)
            {
                str.push_back(str[i + 1]);
                // str[i + 1] = '0';
                i++;
            }
            break;
        case 'Z':
            if (i != str.size() - 1)
            {
                if (str[i + 1] == 'V')
                {
                    score /= 5;
                    // str[i + 1] = '0';
                    i++;
                }
                else if (str[i + 1] == 'W')
                {
                    score /= 2;
                    // str[i + 1] = '0';
                    i++;
                }
            }
            break;
        }
    }

    cout << score;
}