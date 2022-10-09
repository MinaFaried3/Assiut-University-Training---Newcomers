#include <iostream>
using namespace std;
int main()
{
    long long num1, num2, num3, result;
    cin >> num1 >> num2 >> num3 >> result;
    int flag = 0;
    long long myResult1 = (num1 * num2) - num3;
    long long myResult2 = (num1 * num2) + num3;
    long long myResult3 = num1 + (num2 * num3);
    long long myResult4 = num1 - (num2 * num3);
    long long myResult5 = (num1 - num2) + num3;
    long long myResult6 = (num1 + num2) - num3;

    if (myResult1 == result ||
        myResult2 == result ||
        myResult3 == result ||
        myResult4 == result ||
        myResult5 == result ||
        myResult6 == result)
    {
        flag = 1;
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}