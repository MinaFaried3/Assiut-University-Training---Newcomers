#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    int crime = 0, police = 0, val;
    while (cases--)
    {
        cin >> val;
        if (val > 0)
        {
            police += val;
        }
        else
        {
            if (police == 0)
            {
                crime++;
            }
            else
            {
                police--;
            }
        }
    }
    cout << crime << endl;
}