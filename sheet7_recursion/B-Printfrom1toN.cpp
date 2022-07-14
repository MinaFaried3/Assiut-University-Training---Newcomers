#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int counter = 1;
void printToNum(int num)
{

    if (num == 0)
    {
        return;
    }

    cout << counter++ << endl;
    return printToNum(num - 1);
}
int main()
{
    int num;
    cin >> num;
    printToNum(num);
}