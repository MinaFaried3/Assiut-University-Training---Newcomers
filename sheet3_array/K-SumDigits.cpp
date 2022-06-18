#include <iostream>
using namespace std;
int main()
{
    long long size, sum = 0;
    cin >> size;
    string array;
    cin >> array;
    if (array.size() == size)
    {
        for (int i = 0; i < array.size(); i++)
        {
            array[i];
            sum += (array[i] - '0');
        }
        cout << sum;
    }
}