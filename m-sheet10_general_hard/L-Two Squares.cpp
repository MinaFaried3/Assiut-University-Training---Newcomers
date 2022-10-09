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
    double L, S1, S2, queries;
    cin >> L >> S1 >> S2 >> queries;
    double query;
    double time;
    for (int i = 0; i < queries; i++)
    {
        cin >> query;
        time = sqrt(2) * (L - sqrt(query)) / (S2 - S1);
        cout << fixed << setprecision(6) << abs(time) << "\n";
    }
}