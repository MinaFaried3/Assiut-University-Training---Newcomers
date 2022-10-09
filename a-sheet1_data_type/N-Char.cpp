#include <iostream>
using namespace std;
int main()
{
    char chr;
    cin >> chr;

    if (chr >= 97 && chr <= 122)
        chr -= 32;
    else
        chr += 32;

    cout << chr << endl;
}