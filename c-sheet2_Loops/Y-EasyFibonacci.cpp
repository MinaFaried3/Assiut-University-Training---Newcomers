#include <iostream>

using namespace std;
int main()
{
    int times, first, second, sum;
    cin >> times;

    for (int i = 0; i < times; i++)
    {

        if (i <= 1)
        {
            first = 0;
            second = 1;
            cout << i << " ";
        }
        else
        {
            sum = first + second;
            cout << sum << " ";
            first = second;
            second = sum;
        }
    }
}
