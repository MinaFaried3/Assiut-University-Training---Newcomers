#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string egy;
    cin >> egy;
    int arr[5] = {0};

    for (int i = 0; i < egy.size(); i++)
    {
        if (egy[i] == 'E' || egy[i] == 'e')
        {
            arr[0]++;
        }
        else if (egy[i] == 'G' || egy[i] == 'g')
        {
            arr[1]++;
        }
        else if (egy[i] == 'Y' || egy[i] == 'y')
        {
            arr[2]++;
        }
        else if (egy[i] == 'P' || egy[i] == 'p')
        {
            arr[3]++;
        }
        else if (egy[i] == 'T' || egy[i] == 't')
        {
            arr[4]++;
        }
    }
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << min;
}