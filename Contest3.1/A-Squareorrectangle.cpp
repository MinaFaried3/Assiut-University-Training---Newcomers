#include <iostream>
using namespace std;
int main()
{
    int cases, width, height;
    cin >> cases;
    while (cases--)
    {
        cin >> width >> height;
        if (width == height)
        {
            cout << "Square" << endl;
        }
        else
        {
            cout << "Rectangle" << endl;
        }
    }
}