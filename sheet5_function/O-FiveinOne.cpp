#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int countDivisor(int num)
{
    int m = num / 2;
    int counter = 0;
    for (int z = 1; z <= m; z++)
    {
        if (num % z == 0)
        {
            counter++;
        }
    }
    return counter;
}
bool palindrome(int num)
{ // 1551
    int temp = num;
    int sum = 0; // 150
    int d;
    while (num > 0)
    {                         // 1
        d = num % 10;         // 1
        sum = (sum * 10) + d; // 1
        num /= 10;            // num = num / 10;
    }
    if (temp == sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int size;
    cin >> size;
    int *arr = new int[size]; // 6 5 4 3
    // 0 1 2 3
    // 100 4 5 6
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    cout << "The maximum number : " << arr[size - 1] << endl;
    cout << "The minimum number : " << arr[0] << endl;
    int countPrime = 0;
    int countPalindrome = 0;
    for (int i = 0; i < size; i++)
    {
        if (palindrome(arr[i]))
        {
            countPalindrome++;
        }
        int m = arr[i] / 2; // 50
        int flag = 0;
        for (int z = 2; z <= m; z++)
        {
            if (arr[i] % z == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && arr[i] != 1)
            countPrime++;
    }
    cout << "The number of prime numbers : " << countPrime << endl;
    cout << "The number of palindrome numbers : " << countPalindrome << endl;
    int c;
    int max;   // 4
    int index; // 3
    for (int i = 0; i < size; i++)
    {                             // i = 0, 1,2   // 1 2 5 8
        c = countDivisor(arr[i]); // 4
        if (i == 0)
        {
            max = c;
            index = i;
        }
        else
        {
            if (c >= max)
            {
                max = c;
                index = i;
            }
        }
    }
    cout << "The number that has the maximum number of divisors : " << arr[index] << endl;
}