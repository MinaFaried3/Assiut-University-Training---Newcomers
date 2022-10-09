#include <iostream>
using namespace std;
int main()
{
    int lines;
    cin >> lines;
    int space = lines - 1;
    int star = 1;

    for (int i = 1; i <= lines; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int x = 1; x <= star; x++)
        {
            cout << "*";
        }

        space--;
        star += 2;
        cout << endl;
    }
    star -= 2;
    space++;
    for (int i = lines; i >= 1; i--)
    {

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int x = 1; x <= star; x++)
        {
            cout << "*";
        }

        star -= 2;
        space++;
        cout << endl;
    }
}