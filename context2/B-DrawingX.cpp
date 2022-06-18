#include <iostream>
using namespace std;
int main()
{
    // int times, astrickOutside = 0;

    // cin >> times;
    // int astrick = times - 2;
    // // first part
    // for (int i = 1; i <= (times - 1) / 2; i++)
    // {

    //     for (int begin = 1; begin <= astrickOutside; begin++)
    //     {
    //         cout << "*";
    //     }

    //     cout << '\\';

    //     for (int v = 1; v <= astrick; v++)
    //     {
    //         cout << "*";
    //     }

    //     cout << "/";

    //     for (int last = 1; last <= astrickOutside; last++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    //     astrick -= 2;

    //     astrickOutside++;
    // }
    // astrick += 2;
    // astrickOutside--;

    // // middle part
    // for (int i = 1; i <= (times - 1) / 2; i++)
    // {
    //     cout << "*";
    // }
    // cout << "X";
    // for (int i = 1; i <= (times - 1) / 2; i++)
    // {
    //     cout << "*";
    // }
    // cout << endl;
    // // last part
    // for (int i = 1; i <= (times - 1) / 2; i++)
    // {

    //     for (int begin = 1; begin <= astrickOutside; begin++)
    //     {
    //         cout << "*";
    //     }

    //     cout << "/";

    //     for (int v = 1; v <= astrick; v++)
    //     {
    //         cout << "*";
    //     }

    //     cout << '\\';

    //     for (int last = 1; last <= astrickOutside; last++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    //     astrick += 2;

    //     astrickOutside--;
    // }

    // another solution

    int count;
    cin >> count;
    // columns
    for (int i = 1; i <= count; i++)
    {
        // Row
        for (int z = 1; z <= count; z++)
        {
            if (i == z && i != (count + 1) / 2 && z != (count + 1) / 2)
            {
                cout << "\\";
            }
            else if (i == (count + 1) / 2 && z == (count + 1) / 2)
            {
                cout << "X";
            }
            else if (z != (count + 1) / 2 && i == (count + 1) - z)
            {
                cout << "/";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}