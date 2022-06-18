#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string split_1 = "", split_2 = "", merge = "";
    string temp = str, smallest = str;

    for (int i = 0; i < str.size() - 1; i++)
    {
        split_1 += str[i];
        temp.erase(0, 1);
        split_2 = temp;
        sort(split_1.begin(), split_1.end());
        sort(split_2.begin(), split_2.end());
        merge = split_1 + split_2;
        smallest = min(smallest, merge);
    }

    cout << smallest;
}