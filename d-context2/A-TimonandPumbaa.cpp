#include <iostream>

using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    if (a - b >= 0)
    {
        cout << a - b;
    }
    else
    {
        cout << 0;
    }
}