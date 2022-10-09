#include <iostream>
using namespace std;
int main()
{
    int lines;
    cin >> lines;
    int space = lines - 1;
    int asterisk = 1, q = 0;

    for (int i = 1; i <= lines; i++)
    {

        for (int w = 1; w <= space; w++)
        {
            cout << " ";
        }

        // we can use i*2 in for loop

        asterisk = i + q;
        q++;

        while (asterisk != 0)
        {
            cout << "*";
            asterisk--;
        }
        //        this loop used to create space after "*" but in the question didn't need it

        // for (int f = 1; f <= space; f++)
        // {
        //     cout << " ";
        // }
        cout << endl;

        space--;
    }
}