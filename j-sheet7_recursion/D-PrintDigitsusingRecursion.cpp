#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
bool first = false;
int index = 0;
void printDigits(string num)
{
    if (index == num.size())
    {
        index = 0;
        cout << endl;
        first = false;
        return;
    }
    if (first)
    {
        cout << " ";
    }
    first = true;

    cout << num[index];
    index++;
    return printDigits(num);
}
void loop(int cases)
{
    if (cases == 0)
    {
        return;
    }
    string num;
    cin >> num;
    printDigits(num);
    return loop(cases - 1);
}
int main()
{
    int cases;
    cin >> cases;
    loop(cases);
}