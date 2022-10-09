#include <iostream>
using namespace std;
int main()
{
    char chr;
    cin >> chr;
    if (chr >= 97 && chr <= 122)
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    else if (chr >= 65 && chr <= 90)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else
    {
        cout << "IS DIGIT" << endl;
    }
}