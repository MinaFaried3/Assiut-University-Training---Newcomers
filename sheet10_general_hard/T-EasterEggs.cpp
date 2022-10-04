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
    string colors = "ROYGBIV";
    string addition = "GBIV";
    int num;
    cin >> num;

    int size = num - 7;
    cout << colors;
    int times = size / 4;
    for (int i = 0; i < times; i++)
        cout << addition;

    int endIndex = size % 4;
    for (int i = 0; i < endIndex; i++)
        cout << addition[i];
}
