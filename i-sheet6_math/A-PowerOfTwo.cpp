#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
void Solution1()
{
    long long num;
    cin >> num;

    while (num >= 2)
    {
        int x = 3;




        if (num % 2 == 1)
        {

            cout << "NO";
            return;
        }
        num /= 2;
    }

    cout << "YES";
}

void solution2()
{
    long long num;
    cin >> num;

    double result = log2(num) / log2(2);

    if (result - (int)result != 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}
int main()
{
    solution2();
}