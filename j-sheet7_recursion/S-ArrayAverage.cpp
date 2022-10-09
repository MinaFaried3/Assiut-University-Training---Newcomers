#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
double arr[100];
int size_;
// 5
// 0 1 2 3 4
// 5 4 6 9 2
double average_arr(int index, double result)
{ // 0  0

    if (size_ == index)
    {
        return result / size_;
    }
    return average_arr(index + 1, result + arr[index]); // 4  20
}
int main()
{
    cin >> size_;
    for (int i = 0; i < size_; i++)
    {
        cin >> arr[i];
    }
    cout << fixed << setprecision(6) << average_arr(0, 0); //  .0000
}