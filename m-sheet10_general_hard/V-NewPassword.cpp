#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
#include <map>
#include <stack>
#include <queue>
using namespace std;
#define lol long long int
#define endl '\n'
char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
void solution1()
{
    int size, distinct;
    cin >> size >> distinct;

    string base = "";

    for (int i = 0; i < distinct; i++)
        base.push_back(letters[i]);

    int repeated = size / base.size();
    for (int i = 0; i < repeated; i++)
        cout << base;

    int need = size % base.size();

    for (int i = 0; i < need; i++)
        cout << base[i];
}

void solution2()
{
    int size, distinct;
    cin >> size >> distinct;

    for (int i = 0; i < size; i++)
        cout << (char)('a' + i % distinct);
}
int main()
{
    solution2();
}