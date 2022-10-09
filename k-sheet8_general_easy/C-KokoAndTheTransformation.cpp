#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    int size1, size2;
    cin >> size1 >> size2;
    int num;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < size1; i++)
    {
        cin >> num;
        sum1 += num;
    }
    for (int i = 0; i < size2; i++)
    {
        cin >> num;
        sum2 += num;
    }
    if (sum1 == sum2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}