#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
    long long size;
    cin >> size;
    char *rl = new char[size];
    long long *particles = new long long[size];

    for (int i = 0; i < size; i++)
    {
        cin >> rl[i];
    }
    for (int i = 0; i < size; i++)
    {
        cin >> particles[i];
    }

    long long minSeconds = -1;
    bool firstSecond = true;
    long long sub;
    for (int i = 0; i < size - 1; i++)
    {
        if (rl[i] == 'R' && rl[i + 1] == 'L')
        {
            if (particles[i + 1] > particles[i])
            {
                sub = particles[i + 1] - particles[i];

                if (firstSecond)
                {
                    minSeconds = sub / 2;
                    firstSecond = false;
                }
                else
                    minSeconds = min(minSeconds, sub / 2);
            }
        }
    }

    cout << minSeconds;
}