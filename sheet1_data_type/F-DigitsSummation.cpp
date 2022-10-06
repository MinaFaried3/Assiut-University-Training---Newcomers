#include <iostream>
#include <iomanip>
using namespace std;
#define lol long long int
#define endl '\n'

int main()
{
    long long num1, num2;
    cin >> num1 >> num2;
    int lastNum1 = num1 % 10;
    int lastNum2 = num2 % 10;
    cout << lastNum1 + lastNum2 << endl;
}