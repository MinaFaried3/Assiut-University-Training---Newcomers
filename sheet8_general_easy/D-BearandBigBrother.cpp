#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{

    int limak, bob;
    cin >> limak >> bob;
    int years = 0;
    while (limak <= bob)
    {
        limak *= 3;
        bob *= 2;
        years++;
    }
    cout << years;
}