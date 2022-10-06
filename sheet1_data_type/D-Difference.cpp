#include <iostream>
using namespace std;
#define lol long long int
#define endl '\n'

int main()
{
    long long num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;
    long long result = (num1 * num2) - (num3 * num4);
    cout << "Difference = " << result << endl;
}