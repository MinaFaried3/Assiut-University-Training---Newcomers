#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int cases;

    cin >> cases;
    while (cases--)
    {
        int size, odd = 0, even = 0;
        cin >> size;
        int *arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (size % 2 == 0)
        {
            if (even != odd)
            {
                int operation;
                int matchTimes = size / 2;
                if (even > odd)
                {
                    operation = matchTimes - odd;
                }
                else
                {
                    operation = matchTimes - even;
                }
                cout << operation << endl;
            }
            else
            {
                cout << 0 << endl;;
            }
        }
        else
        {
            cout << -1 << endl;;
        }
    }
}