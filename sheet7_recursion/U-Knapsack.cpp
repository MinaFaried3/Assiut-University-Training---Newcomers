#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;

int knapSack(int wholeWeight, int weights[], int values[], int index)
{
    if (wholeWeight == 0 || index == 0)
    {
        return 0;
    }

    if (weights[index - 1] > wholeWeight)
    {
        return knapSack(wholeWeight, weights, values, index - 1);
    }
    else
    {
        return max(
            values[index - 1] + knapSack(wholeWeight - weights[index - 1], weights, values, index - 1),
            knapSack(wholeWeight, weights, values, index - 1));
    }
}

int main()
{
    int itemsCount, wholeWeight;
    cin >> itemsCount >> wholeWeight;

    int *weights = new int[itemsCount];
    int *values = new int[itemsCount];

    for (int i = 0; i < itemsCount; i++)
    {
        cin >> weights[i] >> values[i];
    }

    cout << knapSack(wholeWeight, weights, values, itemsCount) << endl;

    delete[] weights, values;
}