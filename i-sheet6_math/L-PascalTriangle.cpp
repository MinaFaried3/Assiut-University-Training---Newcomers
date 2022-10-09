#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    long long num;
    cin >> num;
    int val;
    for (int i = 0; i < num; i++)
    {
        val = 1;

        for (int j = 0; j <= i; j++)
        {
            cout << val << " ";
            val = val * (i - j) / (j + 1);
        }

        cout << endl;
    }
}