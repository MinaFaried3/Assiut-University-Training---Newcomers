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
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}
bool testTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    if ((x1 == x2 && y1 == y2) || (x3 == x2 && y3 == y2) || (x1 == x3 && y1 == y3))
        return false;

    int line1 = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
    int line2 = ((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2));
    int line3 = ((x1 - x3) * (x1 - x3)) + ((y1 - y3) * (y1 - y3));

    vector<int> vec;

    vec.push_back(line1);
    vec.push_back(line2);
    vec.push_back(line3);

    sort(vec.begin(), vec.end());

    int sum1 = vec[0] + vec[1];
    int sum2 = vec[2];

    return (sum1 == sum2);
}

int main()
{
    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if (testTriangle(x1, y1, x2, y2, x3, y3))
    {
        cout << "RIGHT" << endl;
    }
    else if (testTriangle(x1 + 1, y1, x2, y2, x3, y3) || testTriangle(x1 - 1, y1, x2, y2, x3, y3) ||
             testTriangle(x1, y1 + 1, x2, y2, x3, y3) || testTriangle(x1, y1 - 1, x2, y2, x3, y3) ||
             testTriangle(x1, y1, x2 + 1, y2, x3, y3) || testTriangle(x1, y1, x2 - 1, y2, x3, y3) ||
             testTriangle(x1, y1, x2, y2 + 1, x3, y3) || testTriangle(x1, y1, x2, y2 - 1, x3, y3) ||
             testTriangle(x1, y1, x2, y2, x3 + 1, y3) || testTriangle(x1, y1, x2, y2, x3 - 1, y3) ||
             testTriangle(x1, y1, x2, y2, x3, y3 + 1) || testTriangle(x1, y1, x2, y2, x3, y3 - 1))
    {
        cout << "ALMOST" << endl;
    }
    else
    {

        cout << "NEITHER" << endl;
    }
}