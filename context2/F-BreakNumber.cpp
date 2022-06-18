#include <iostream>
using namespace std;
int main()
{
    long long times, num, counter = 0, counter_max = 0;
    cin >> times;
    for (int i = 1; i <= times; i++)
    {
        cin >> num;
        while (num % 2 == 0)
        {
            num /= 2;
            counter++;
        }
        if (counter_max < counter)
            counter_max = counter;
        counter = 0;
    }
    cout << counter_max;
}