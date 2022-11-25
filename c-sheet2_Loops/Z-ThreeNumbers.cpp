#include <iostream>

using namespace std;
int main()
{
    int max, sum, counter = 0;
    cin >> max >> sum;
    for (int i = 0; i <= max; i++)
    {
        for (int z = 0; z <= max; z++)
        {
            if (sum - i - z >= 0 && sum - i - z <= max)
            {
                counter++;
            }
        }
    }
    cout << counter;
}