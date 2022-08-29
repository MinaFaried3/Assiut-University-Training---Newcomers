#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
int binarySearch(vector<int> v, int To_Find)
{
    int lo = 0, hi = v.size() - 1;
    int mid;
    // This below check covers all cases , so need to check
    // for mid=lo-(hi-lo)/2
    while (hi - lo > 1)
    {
        int mid = (hi + lo) / 2;
        if (v[mid] < To_Find)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (v[lo] == To_Find)
    {
        return lo;
    }
    else if (v[hi] == To_Find)
    {
        return hi;
    }
    else
    {
        return -1;
    }
}
int main()
{
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293};

    int num1, num2;
    cin >> num1 >> num2;
    int index1 = binarySearch(primes, num1);
    int index2 = binarySearch(primes, num2);
    if (index1 == -1 || index2 == -1)
    {
        cout << "NO";
    }
    else
    {
        if (index2 == index1 + 1)
        {
            cout << "YES";
        }
        else
            cout << "NO";
    }
}