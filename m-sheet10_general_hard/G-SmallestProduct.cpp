#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
#define lol long long int
int main()
{
    lol size;
    cin >> size;
    double sum = 0;
    long long product;
    for (int i = 0; i < size; i++)
    {
        cin >> product;
        sum += log10(product);
    }
    double res = sum / size;
    cout << (lol)pow(10, res) + 1;
}