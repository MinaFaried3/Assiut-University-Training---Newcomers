#include <iostream>
#include <iomanip>
using namespace std;
#define lol long long int
#define endl '\n'

int main()
{
    const double PI = 3.141592653;
    double radius;
    cin >> radius;
    cout << fixed << setprecision(9) << PI * radius * radius << endl;
}