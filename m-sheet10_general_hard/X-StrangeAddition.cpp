#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
#include <map>
#include <stack>
#include <queue>
using namespace std;
#define lol long long int
#define endl '\n'
void fast()
{
    cin.tie(0);
    cout.sync_with_stdio(0);
}

int main()
{
    fast();

    int size;
    cin >> size;

    bool done = false;
    int *arr = new int[size];
    vector<int> vec;

    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];

        if (arr[i] == 100 || arr[i] == 0)
            vec.push_back(arr[i]);
        else if (arr[i] >= 1 && arr[i] <= 9 && !done)
        {
            vec.push_back(arr[i]);
            done = true;
        }
    }

    if (done)
        for (int i = 0; i < size; i++)
        {
            if (arr[i] >= 10 && arr[i] < 100 && arr[i] % 10 == 0)
            {
                vec.push_back(arr[i]);
                break;
            }
        }
    else
        for (int i = 0; i < size; i++)
            if (arr[i] >= 10 && arr[i] < 100)
            {
                vec.push_back(arr[i]);
                break;
            }

    cout << vec.size() << endl;
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
}