
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{

    int cases;
    cin >> cases;
    while (cases--)
    {
        string value;

        cin >> value;
        int size = value.size();
        if (size > 10)
        {
            cout << value[0] << size - 2 << value[size - 1] << endl;
        }
        else
        {
            cout << value << endl;
        }
    }
}