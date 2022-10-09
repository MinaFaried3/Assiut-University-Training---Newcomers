
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int count = 0;
    for (int i = 0; i < x.size(); i++)
    {

        count += (x[i] - '0');
    }
    cout << count;
}