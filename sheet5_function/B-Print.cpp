#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
void print_nums(int num)
{

    for (int i = 1; i <= num; i++)
    {
        cout << i;
        if (i != num)
            cout << " ";
    }
}
void print_nums2(int num)
{

    for (int i = 1; i <= num; i++)
    {
        if (i != 1)
            cout << " ";
        cout << i;
    }
}
int main()
{
    int num;
    cin >> num;
    print_nums2(num);
}