#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
long long size_, result;
long long arr[21];
//                 1          1
bool check(long long sum, long index)
{
    if (index == size_)
    {
        return sum == result;
    }
    bool route1 = check(sum + arr[index], index + 1);
    bool route2 = check(sum - arr[index], index + 1);
    return route1 || route2;
}
/*
5 5
1 2 3 4 5
*/
int main()
{
    cin >> size_ >> result;
    for (int i = 0; i < size_; i++)
    {
        cin >> arr[i];
    }
    if (check(arr[0], 1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}