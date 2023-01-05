#include <iostream>
using namespace std;
void solution1()
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

    for (int i = lines; i >= 1; i--)
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
void solution3()
{
    int lines;
    cin >> lines;
    int asterisk = 1;
    int space = lines - 1;
    for (size_t i = 1; i <= lines * 2; i++)
    {
        for (size_t x = 0; x < space; x++)
        {
            cout << ' ';
        }
        for (size_t x = 0; x < asterisk; x++)
        {
            cout << '*';
        }
        cout << endl;
        if (i < lines)
        {
            asterisk += 2;
            space--;
        }
        else if (i > lines)
        {
            asterisk -= 2;
            space++;
        }
    }
}

int main()
{
    solution2();
}