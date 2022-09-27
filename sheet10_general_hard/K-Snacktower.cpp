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
int main()
{
    lol size;
    cin >> size;

    lol *arr = new lol[size + 1];
    fill_n(arr, size + 1, 0);

    lol curr = size ;
    lol num;

    for (int i = 0; i < size; i++)
    {
        cin >> num;
        arr[num] = 1;
        while (arr[curr])
        {
            cout << curr << " ";
            curr--;
        }
        cout << "\n";
    }
}