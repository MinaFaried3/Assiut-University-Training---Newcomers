#include <iostream>
using namespace std;
int main()
{
    int index;
    cin >> index;
    long long  new_num;
    long long num1 = 0;
    long long num2 = 1;
    if (index == 1)
    {
        cout << num1;
        return 0;
    }
    if (index == 2)
    {
        cout << num2;
        return 0;
    }
    for (int i = 3; i <= index; i++)
    {
        new_num = num1 + num2;

        num1 = num2;
        num2 = new_num;
    }
    cout << new_num;
}