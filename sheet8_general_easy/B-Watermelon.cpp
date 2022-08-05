#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
void solution1()
{
    int weight;

    cin >> weight;
    bool isEven = false;
    for (int i = 2; i <= weight / 2; i++)
    {
        if (i % 2 == 0 && (weight - i) % 2 == 0)
        {
            // cout << i << endl;
            isEven = true;
            break;
        }
    }

    isEven ? cout << "YES" : cout << "NO";
}
void solution2()
{
    int weight;

    cin >> weight;
    if (weight <= 2)
    {
        cout << "NO";
        return;
    }
    if (weight % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    solution1();
}