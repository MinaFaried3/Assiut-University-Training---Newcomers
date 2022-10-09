#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
// solution1
void pyramid1(int num, int spaces)
{
    if (num == 0)
    {
        return;
    }
    int stars = num + (num - 1);
    // spaces
    for (int i = 1; i <= spaces; i++)
    {
        cout << " ";
    }
    // stars
    for (int i = 1; i <= stars; i++)
    {
        cout << "*";
    }
    cout << endl;
    pyramid1(num - 1, spaces + 1);
}
// solution2
int spaces_;
void pyramid2(int num)
{
    if (num == 0)
    {
        return;
    } 
    // spaces
    for (int i = 1; i <= spaces_ - num; i++)
    {
        cout << " ";
    }
    // stars
    for (int i = 1; i <= num * 2 - 1; i++)
    {
        cout << "*";
    }
    cout << endl;
    pyramid2(num - 1);
}
int main()
{
    int num;
    cin >> num;
    int start = 0;
    // solution1
    pyramid1(num, start);
    // solution2
    // spaces_ = num;
    // pyramid2(num);
}