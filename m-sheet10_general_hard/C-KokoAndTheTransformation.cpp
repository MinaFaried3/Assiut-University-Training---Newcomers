#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;
#define lol long long int

int main()
{
    int size1, size2;
    cin >> size1 >> size2;
    int *arr1 = new int[size1], *arr2 = new int[size2];
    lol sum1 = 0, sum2 = 0;
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
        sum1 += arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
        sum2 += arr2[i];
    }
    if (sum1 == sum2)
        cout << "Yes";
    else
        cout << "No";
}