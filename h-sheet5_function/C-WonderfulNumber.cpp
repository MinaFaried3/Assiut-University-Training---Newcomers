#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int index = 0;
int arr[100];
bool isOdd(int num)
{
    if (num % 2 == 1)
    {
        return true;
    }

    return false;
}
// notice these convert functions only work in odd numbers

void convert(int num)
{
    while (num != 0)
    {
        arr[index] = num % 2;
        num /= 2;
        index++;
    }
    index--;
}

bool isBlindRome()
{
    for (int i = 0; i < (index + 1) / 2; i++)
    {
        if (arr[i] != arr[index - i])
            return false;
    }
    return true;
}
// ==============================================================

int convert2(int num)
{
    int binary = 0;
    int temp;
    while (num != 0)
    {
        temp = num % 2;
        num /= 2;
        binary *= 10;
        binary += temp;
    }
    return binary;
}

bool isBlindRome2(int binary)
{
    int temp = binary;
    int digit;
    int result = 0;
    while (temp != 0)
    {
        digit = temp % 10;
        temp /= 10;
        result *= 10;
        result += digit;
    }
    if (result == binary)
        return true;

    return false;
}
int main()
{
    int num;
    cin >> num;

    if (isOdd(num))
    {

        convert(num);
        if (isBlindRome())
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
}

// using recursion
void to_binary(int number)
{
    if (number > 1)
        to_binary(number / 2);
    cout << number % 2;
}