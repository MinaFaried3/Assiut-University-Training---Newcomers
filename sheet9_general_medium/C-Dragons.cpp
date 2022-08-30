#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
void insertion_sort(long long *arr1, long long *arr2, long long size)
{
    for (int i = 0; i < size; i++)
    {
        long long copy1 = arr1[i];
        long long copy2 = arr2[i];
        long long x = i - 1;

        for (; x >= 0; --x)
        {
            if (arr1[x] < copy1)
            {
                break;
            }

            arr1[x + 1] = arr1[x];
            arr2[x + 1] = arr2[x];
        }

        arr1[x + 1] = copy1;
        arr2[x + 1] = copy2;
    }
}

void Solution1()
{
    long long energy, dragonNums;

    cin >> energy >> dragonNums;

    long long *dragons = new long long[dragonNums];
    long long *energies = new long long[dragonNums];

    for (int i = 0; i < dragonNums; i++)
    {
        cin >> dragons[i] >> energies[i];
    }

    insertion_sort(dragons, energies, dragonNums);

    bool isDefeated = true;

    for (int i = 0; i < dragonNums; i++)
    {
        if (energy > dragons[i])
        {
            energy += energies[i];
        }
        else
        {
            isDefeated = false;
            break;
        }
    }

    if (isDefeated)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

void Solution2()
{
    vector<pair<int, int>> dragons;
    long long energy, dragonsNum, dragonEnergy, givenEnergy;
    cin >> energy >> dragonsNum;
    for (int i = 0; i < dragonsNum; i++)
    {
        cin >> dragonEnergy >> givenEnergy;
        dragons.push_back(make_pair(dragonEnergy, givenEnergy));
    }

    sort(dragons.begin(), dragons.end());
    bool isDefeated = true;

    for (int i = 0; i < dragonsNum; i++)
    {
        if (energy > dragons[i].first)
        {
            energy += dragons[i].second;
        }
        else
        {
            isDefeated = false;
            break;
        }
    }

    if (isDefeated)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    Solution2();
}