#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
#define lol long long int

int main()
{
    int boxesNum, targets;
    cin >> boxesNum;
    int *boxes = new int[boxesNum];
    int max_;
    for (int i = 0; i < boxesNum; i++)
    {
        cin >> boxes[i];
    }
    cin >> targets;
    int boxIndex, num;
    for (int i = 0; i < targets; i++)
    {
        cin >> boxIndex >> num;
        boxIndex--;

        boxes[boxIndex - 1] += num - 1;
        boxes[boxIndex + 1] += boxes[boxIndex] - num;
        boxes[boxIndex] = 0;
    }

    for (int i = 0; i < boxesNum; i++)
    {
        cout << boxes[i] << endl;
    }
}