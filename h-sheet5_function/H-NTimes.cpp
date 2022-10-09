#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
void NTimes(int loop_times, char c)
{
    for (int i = 1; i <= loop_times; i++)
    {
        if (i != 0)
        {
            cout << " ";
        }
        cout << c;
    }
    cout << endl;
}
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int times;
        char c;
        cin >> times >> c;
        NTimes(times, c);
    }
}