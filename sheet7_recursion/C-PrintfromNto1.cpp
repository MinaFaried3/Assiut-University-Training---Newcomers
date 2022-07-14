#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
bool first = false;
void printToNum(int num)
{

    if (num == 0)
    {
        return;
    }
    if (first)
    {
        cout << " ";
    }
    first = true;
    cout << num;
    //! we can't use postfix here
    return printToNum(--num);
}
int main()
{
    int num;
    cin >> num;
    printToNum(num);
}