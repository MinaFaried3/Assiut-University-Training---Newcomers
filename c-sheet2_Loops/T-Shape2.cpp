#include <iostream>
using namespace std;
int main()
{int lines;
    cin >> lines;
    int space = lines - 1;
    int asterisk = 1, currentAsterisk = 0;

    for (int i = 1; i <= lines; i++)
    {

        for (int w = 1; w <= space; w++)
        {
            cout << " ";
        }

        // we can use i*2 in for loop

        for (int x = 1; x <= asterisk; x++)
        {
            cout << "*";
        }

        cout << endl;
        asterisk += 2;
        space--;
    }
}