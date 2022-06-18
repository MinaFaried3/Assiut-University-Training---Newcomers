#include <iostream>

using namespace std;
bool luck(int i)
{
    bool lucky;
    while (i != 0)
    {
        int digit = i % 10;
        if (digit == 4 || digit == 7)
        {
            lucky = true;
        }
        else
        {
            lucky = false;
            break;
        }
        int new_i = (i - digit) / 10;
        if (new_i == 0)
        {
            break;
        }
        i = new_i;
    }
    return lucky;
}
int main()
{
    int a, b;
    cin >> a >> b;
    bool isLuck = false;
    for (int i = a; i <= b; i++)
    {

        if (luck(i))
        {
            cout << i << " ";
            isLuck = true;
        }
    }
    if (!isLuck)
    {
        cout << -1;
    }
}