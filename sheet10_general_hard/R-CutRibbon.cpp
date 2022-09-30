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
int main()
{
    int val, A, B, C;
    cin >> val >> A >> B >> C;
    int result = 0;

    for (int a = 0; a <= val; a++)
        for (int b = 0; b <= val; b++)
        {
            // aA + bB + cC = val
            int c = (val - a * A - b * B) / C;
            if (c < 0)
                c = 0;

            if (a * A + b * B + c * C == val)
                result = max(result, c + b + a);
        }

    cout << result << endl;
}