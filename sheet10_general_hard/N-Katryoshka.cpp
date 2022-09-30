#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
#define lol long long int
int main()
{
    lol eye, mouth, body;
    cin >> eye >> mouth >> body;

    if (eye == 0 || body == 0)
    {
        cout << 0;
        return 0;
    }

    if (eye <= mouth && eye <= body)
    {
        cout << eye;
        return 0;
    }
    if (body <= mouth && body <= eye)
    {
        cout << body;
        return 0;
    }

    /*
    90 24 89
    66 0  65

    24 + 33

    89 24 90
    24 + 44

    89 24 40
    24 + 44

    10 20 5


    5 20 10
    */

    lol result =0;
    if (eye >= mouth && body >= mouth)
    {
        if (mouth <= body)
            result += mouth;

        eye -= mouth;
        body -= mouth;

        eye /= 2;
        if (eye <= body)
            result += eye;
        else
            result += body;
        cout << result;
        return 0;
    }
}