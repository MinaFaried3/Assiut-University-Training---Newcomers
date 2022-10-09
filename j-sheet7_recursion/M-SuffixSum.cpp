#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int counter = 0, last_num, size_;
long long sum(long long arr[])
{
    // 5 3
    // 0 1 2 3  4
    // 1 8 2 10 3
    if (counter == last_num)
    {
        return 0;
    }
    // 3 + 10 + 2
    counter++;
    return arr[--size_] + sum(arr); // 4 3 2
}

int main()
{

    cin >> size_ >> last_num;
    long long *arr = new long long[size_];

    for (int i = 0; i < size_; i++)
    {
        cin >> arr[i];
    }
    cout << sum(arr);

    delete[] arr;
}