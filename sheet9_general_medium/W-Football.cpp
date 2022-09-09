#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
#include <iterator>
#include <map>
using namespace std;
#define lol long long int
void solution1()
{
    int size;
    cin >> size;
    string *arr = new string[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + size);

    int teamCount = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            teamCount++;
        }
    }

    pair<string, int> *teams = new pair<string, int>[teamCount];

    for (int i = 0; i < teamCount; i++)
    {
        teams[0].second = 0;
    }
    teams[0].first = arr[0];
    teams[0].second = 1;
    int teamsIndex = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            teamsIndex++;
            teams[teamsIndex].first = arr[i];
            teams[teamsIndex].second++;
        }
        else
        {
            teams[teamsIndex].second++;
        }
    }

    int indexMax = 0, max = teams[0].second;
    for (int i = 1; i < teamCount; i++)
    {
        if (max < teams[i].second)
        {
            max = teams[i].second;
            indexMax = i;
        }
    }

    cout << teams[indexMax].first;
}
void solution2()
{
    int size;
    cin >> size;
    map<string, int> teams;
    string str;
    for (int i = 0; i < size; i++)
    {
        cin >> str;

        if (teams[str] == 0)
        {
            teams[str] = 1;
        }
        else
        {
            teams[str]++;
        }
    }

    int max;
    map<string, int>::iterator itr;
    for (itr = teams.begin(); itr != teams.end(); itr++)
    {
        if (itr == teams.begin())
        {
            max = itr->second;
            str = itr->first;
        }
        else
        {
            if (max < itr->second)
            {
                max = itr->second;
                str = itr->first;
            }
        }
    }

    cout << str;
}
int main()
{
    solution2();
}