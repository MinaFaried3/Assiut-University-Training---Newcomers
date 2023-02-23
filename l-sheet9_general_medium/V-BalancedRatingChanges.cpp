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

void solution1()
{
    int size;
    cin >> size;

    int num;
    bool toggle = true;
    double result;
    for (int i = 0; i < size; i++)
    {
        cin >> num;

        if (num % 2 == 0)
        {
            num /= 2;
        }
        else
        {
            result = (double)num / 2;
            if (toggle)
            {
                num = ceil(result);
            }
            else
            {
                num = floor(result);
            }
            toggle = !toggle;
        }
        cout << num << endl;
    }
}
void solution2()
{
    enum Status
    {
        done,
        negative,
        positive,
    };

    lol cases;
    cin >> cases;
    Status previousStatus = done;
    lol num;
    while (cases--)
    {
        cin >> num;
        if (num % 2 == 0)
        {
            cout << num / 2 << endl;
            continue;
        }

        switch (previousStatus)
        {
        case done:
            cout << num / 2 << endl;
            if (num < 0)
                previousStatus = negative;
            else
                previousStatus = positive;
            break;
        case negative:
            if (num < 0)
                cout << (num / 2) - 1 << endl;
            else
                cout << (num / 2) << endl;
            previousStatus = done;
            break;
        case positive:
            if (num < 0)
                cout << (num / 2) << endl;
            else
                cout << (num / 2) + 1 << endl;
            previousStatus = done;
            break;
        }
    }
}

int main()
{
    solution1();
}