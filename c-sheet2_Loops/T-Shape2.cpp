#include <iostream>
using namespace std;
void solution1()
{
    int lines;
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
void solution2()
{
    int lines;
    cin >> lines;

    for (int i = 1; i <= lines; i++)
    {

        for (int w = lines - i; w >= 1; w--)
        {
            cout << " ";
        }

        // use i*2 in for loop
        for (int x = 1; x <= (i * 2) - 1; x++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
int main()
{
    solution1();
}