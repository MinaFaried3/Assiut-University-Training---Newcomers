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
    int students, puzzles;
    cin >> students >> puzzles;
    int *arr = new int[puzzles];

    for (int i = 0; i < puzzles; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + puzzles);
    int min_;
    for (int i = 0; i <= puzzles - students; i++)
    {
        if (i == 0)
        {
            min_ = arr[i + students - 1] - arr[i];
            continue;
        }

        min_ = min(min_, arr[i + students - 1] - arr[i]);
    }

    cout << min_;
}