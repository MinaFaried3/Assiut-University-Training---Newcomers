#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, times;
    cin >> times;

    for (int i = 1; i <= times; i++)
    {
        cin >> num;
        int ones = 0;
        int plus = 0;
        int dec = 0;

        while (num != 0)
        {

            if (num % 2 == 1)
            {
                ones++;
                dec += 1 * pow(2, plus);
                plus++;
            }
            num /= 2;

            // cout << temp << "        " << rem << endl;
        }

        cout << dec << endl;
    }
}
