#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
double Average(double *arr, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];

        sum += arr[i];
    }

    return sum / size;
}
int main()
{
    int size;
    cin >> size;
    double *arr = new double[size];

    cout << setprecision(8) << Average(arr, size);
}