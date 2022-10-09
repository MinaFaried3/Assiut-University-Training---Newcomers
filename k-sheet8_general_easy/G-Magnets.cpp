#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    string num1, num2;
    int counts = 1;

    cin >> num1;
    if (cases == 1)
    {
        cout << 1;
        return 0;
    }
    cases--;
    while (cases--)
    {
        cin >> num2;
        if (num1[1] == num2[0])
        {

            counts++;
        }

        num1 = num2;
    }
    cout << counts;
}