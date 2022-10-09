#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>

using namespace std;
int ones[5001];
int twos[5001];
int threes[5001];
int main()
{
    int size;
    cin >> size;

    int index1 = 0, index2 = 0, index3 = 0;
    int num;

    for (int i = 1; i <= size; i++)
    {
        cin >> num;
        if (num == 1)
        {
            ones[index1] = i;
            index1++;
        }
        else if (num == 2)
        {
            twos[index2] = i;
            index2++;
        }
        else
        {
            threes[index3] = i;
            index3++;
        }
    }

    int teamNum = min(index1, min(index2, index3));

    cout << teamNum << endl;

    for (int i = 0; i < teamNum; i++)
    {
        cout << ones[i] << " " << twos[i] << " " << threes[i] << endl;
    }
}