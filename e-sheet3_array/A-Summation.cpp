#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    long long sum = 0;
    for (int i = 1; i <= size; i++)
    {
        int num;
        cin >> num;
        sum += num;
    }
    if (sum < 0)
    {
        sum *= -1;
    }

    cout << sum << endl;
}
