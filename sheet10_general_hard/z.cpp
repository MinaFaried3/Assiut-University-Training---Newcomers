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
    vector<int> vec{10, 20, 30, 40};
    vector<int>::iterator it;
    it = find(vec.begin(), vec.end(), 20);
    vec.erase(it);

     for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << ' ' << *it;


}