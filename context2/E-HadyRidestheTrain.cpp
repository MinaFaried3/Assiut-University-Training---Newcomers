#include <iostream>
using namespace std;
int main()
{
    long long seat;
    cin >> seat;

    // rows
    long long rows = seat / 4;

    // columns
    long long columns;
    if (rows % 2 == 0)
    {
        columns = seat % 4;
    }
    else
    {
        columns = 3 - (seat % 4);
    }

    cout << rows << " " << columns;
}