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
int arr[1000001] = {0};
int main()
{
    arr[1] = 1;
    for (lol i = 2; i <= 1000; i++)
    {
        for (lol x = 2 * i; x <= 1000000; x += i)
        {
            arr[x] = 1;
        }
    }

    lol cases;
    cin >> cases;
    lol num;
    lol sqrtNum;
    while (cases--)
    {
        cin >> num;
        sqrtNum = sqrt(num);
        if (((sqrtNum * sqrtNum) == num) && arr[sqrtNum] == 0)
        {
            cout << "YES";
        }
        else
            cout << "NO";
        cout << '\n';
    }
}