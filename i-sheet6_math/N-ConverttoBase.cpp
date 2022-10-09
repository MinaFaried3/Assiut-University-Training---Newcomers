#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
long long toNum(char chr)
{
    if (chr >= '0' && chr <= '9')
    {
        return chr - '0';
    }
    else
    {
        return chr - 'A' + 10;
    }
}
char toChar(long long num)
{
    if (num >= 0 && num <= 9)
    {
        return num + '0';
    }
    else
    {
        return num + 'A' - 10;
    }
}

long long toDecimal(char *arr, long long base)
{
    long long size = strlen(arr);
    long long power = 1;
    long long result = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        result += toNum(arr[i]) * power;
        power *= base;
    }

    return result;
}

char *fromDecimal(long long base, char arr[], long long num)
{
    int index = 0;
    while (num > 0)
    {
        arr[index++] = toChar(num % base);
        num /= base;
    }
    arr[index] = '\0';
    reverse(arr, arr + index);

    return arr;
}

int main()
{
    int type;

    cin >> type;

    if (type == 1)
    {
        char num[35] = {""};
        cin >> num;
        long long base;
        cin >> base;

        cout << toDecimal(num, base);
    }
    else
    {
        long long num, base;
        cin >> num >> base;
        char result[100];
        cout << fromDecimal(base, result, num);
    }
}
