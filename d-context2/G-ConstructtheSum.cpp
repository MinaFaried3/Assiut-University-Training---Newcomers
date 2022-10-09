#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
#include <map>
#include <stack>
#include <queue>
using namespace std;
#define lol long long int
#define endl '\n'
void fast()
{
    cin.tie(0);
    cout.sync_with_stdio(0);
}

int main()
{
    fast();
    long long times, num, sum, result = 0;
    cin >> times;

    vector<lol> vec;
    while (times--)
    {
        /*
        5 3
        2 1


        6 4
        3 1

        7 10
        4 3 2 1

        2 10
        -1

        */
        cin >> num >> sum;
        if (num >= sum)
        {
            if (((sum * (sum + 1) / 2) < num))
                cout << -1;
            else
                for (lol i = sum - 1; i >= 1; i--)
                {
                    if (result + i <= sum)
                    {
                        vec.push_back(i);
                        result += i;
                    }

                    if (result == sum)
                        break;
                }

            if (result == sum)
                for (lol i = 0; i < vec.size(); i++)
                    cout << vec[i] << " ";
        }
        else
        {
            if (((num * (num + 1) / 2) < sum))
                cout << -1;
            else
                for (lol i = num - 1; i >= 1; i--)
                {
                    if (result + i <= sum)
                    {
                        vec.push_back(i);
                        result += i;
                    }

                    if (result == sum)
                        break;
                }

            if (result == sum)
                for (lol i = 0; i < vec.size(); i++)
                    cout << vec[i] << " ";
        }

        vec.clear();
        result = 0;
        cout << endl;
    }
}