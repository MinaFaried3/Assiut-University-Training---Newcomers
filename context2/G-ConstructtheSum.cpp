#include <iostream>
using namespace std;
int main()
{
    long long times, n, s, sum = 0;
    cin >> times;
    for (int i = 1; i <= times; i++)
    {
        cin >> n >> s;
        for (int j = 1; j <= n; j++)
        {
            sum += j;
            cout << j << " ";
            if (sum == s)
            {
                break;
            }
        }

        sum = 0;
        cout << endl;
    }
}