#include <iostream>
using namespace std;

int main()
{
    double num;
    cin >> num;
    if (num >= 0 && num <= 25)
        cout << "Interval [0,25]" << endl;

    else if (num > 25 && num <= 50)
        cout << "Interval (25,50]" << endl;

    else if (num > 50 && num <= 75)
        cout << "Interval (50,75]" << endl;
        
    else if (num > 75 && num <= 100)
        cout << "Interval (75,100]" << endl;
        
    else
        cout << "Out of Intervals" << endl;
    
}