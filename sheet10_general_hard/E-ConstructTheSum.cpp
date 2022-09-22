#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;
#define lol long long int
lol arr[100000] = {0};
int main()
{
    int tests;
    cin >> tests;
    lol less, sum, index = 0, counts = 0;

    while (tests--)
    {
        cin >> less >> sum;
        if (less >= sum)
        {
            cout << 1 << " " << sum;
        }
        else
        {
            if ((less * (less + 1) / 2) < sum)
            {
                cout << -1;
            }
            else
            {
                while (sum)
                {
                    if (sum >= less)
                    {
                        arr[index] = less;
                        less--;
                        sum -= arr[index];
                    }
                    else
                    {
                        arr[index] = sum;
                        sum = 0;
                    }
                    index++;
                    counts++;
                }

                cout << counts << " ";
                for (lol i = 0; i < counts; i++)
                {
                    cout << arr[i];
                    if (i != counts - 1)
                        cout << " ";
                }
            }
        }

        if (tests != 0)
        {
            index = 0, counts = 0;
            cout << "\n";
        }
    }
}