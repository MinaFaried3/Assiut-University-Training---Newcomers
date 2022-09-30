#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
#define lol long long int
bool isPrime(lol num)
{
    if (num <= 1)
        return false;

    for (lol i = sqrt(num); i >= 2; i--)
        if (num % i == 0)
            return false;

    return true;
}
int main()
{
    lol size, x;
    cin >> size >> x;
    int operation;
    lol *arr = new lol[size];
    for (lol i = 0; i < size; i++)
        cin >> arr[i];

    for (lol i = 0; i < size; i++)
    {
        cin >> operation;
        if (operation == 1)
        {
            if (isPrime(arr[i]))
                if (arr[i] % 2 == 0)
                    cout << 0 << " ";
                else
                    cout << 5 << " ";
            else
                cout << -1 << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
}