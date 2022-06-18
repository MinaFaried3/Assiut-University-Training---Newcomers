#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int max;

    if (a < b)
    {

        for (int i = 1; i <= b; i++)
        {

            if (b % i == 0 && a % i == 0)
            {
                max = i;
            }
        }
        cout << max;
    }
    else if (b < a)
    {

        for (int i = 1; i <= a; i++)
        {

            if (a % i == 0 && b % i == 0)
            {
                max = i;
            }
        }
        cout << max;
    }
    else if (a == b)
    {
        cout << a;
    }
}
