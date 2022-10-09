#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
#define lol long long int
void solution1()
{
    int students, subs;
    cin >> students >> subs;
    int Size = students * subs;
    char *marks = new char[Size];
    char *higherMarks = new char[subs];
    for (int i = 0; i < Size; i++)
    {
        cin >> marks[i];
    }
    int index = 0;
    for (int i = 0; i < subs; i++)
    {
        int max = marks[i];
        for (int x = i + subs; x < Size; x += subs)
        {
            if (max < marks[x])
            {
                max = marks[x];
            }
        }
        higherMarks[index] = max;
        index++;
    }
    int count = 0;
    for (int z = 0; z < students; z++)
    {
        int x = 0;
        for (int i = z * subs; i < (z + 1) * subs; i++)
        { 
            if (marks[i] == higherMarks[x])
            {
                count++;
                break;
            }
            x++;
        }
    }
    cout << count;
}
void solution2()
{

    int students, subjects;
    cin >> students >> subjects;

    string *arr = new string[students];
    int *win = new int[students];
    int *score = new int[students];
    for (int i = 0; i < students; i++)
    {
        cin >> arr[i];
        win[i] = 0;
        score[i] = 0;
    }
    for (int i = 0; i < students; i++)
    {
        for (int x = 0; x < subjects; x++)
        {
        }
    }

    int maxIndex = 0;

    for (int x = 0; x < subjects; x++)
    {
        for (int i = 0; i < students; i++)
        {
            score[i] = arr[i][x];
        }

        for (int i = 1; i < students; i++)
        {
            if (score[maxIndex] <= score[i])
            {
                maxIndex = i;
            }
        }

        for (int i = 0; i < students; i++)
        {
            if (score[maxIndex] == score[i])
            {
                win[i] = 1;
            }
        }
        maxIndex = 0;
    }
    int count = 0;
    for (int i = 0; i < students; i++)
    {
        if (win[i] == 1)
        {
            count++;
        }
    }

    cout << count;
}
int main()
{
    solution1();
}