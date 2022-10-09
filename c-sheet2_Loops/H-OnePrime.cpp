#include <iostream>

using namespace std;
int main()
{
    int count;
    cin >> count;
    int r = 0;
    if (count <= 1)
        cout << "NO";
    else
        for (int i = count - (count / 2); i > 1; i--)
        {
            if (count % i == 0)
                r++;

            if (r > 0)
                break;
        }

    if (r > 0)
        cout << "NO";
    else
        cout << "YES";
}