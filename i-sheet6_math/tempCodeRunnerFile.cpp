#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << 1 << " ";
        for (int j = 1; j < i; j++)
        {
            cout << i << " ";
        }
        if (i != 0)
            cout << 1;

        cout << endl;
    }
}