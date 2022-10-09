#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
#define lol long long int
int main()
{

    int size;
    cin >> size;

    int num;
    bool toggle = true;
    double result;
    for (int i = 0; i < size; i++)
    {
        cin >> num;

        if (num % 2 == 0)
        {
            num /= 2;
        }
        else
        {
            result = (double)num / 2;
            if (toggle)
            {
                num = ceil(result);
            }
            else
            {
                num = floor(result);
            }
            toggle = !toggle;
        }
        cout << num << endl;
    }
}