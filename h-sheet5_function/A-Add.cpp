#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int sum(int a, int x)
{
    return a + x;
}
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int result = sum(num1, num2);
    cout << result;
}