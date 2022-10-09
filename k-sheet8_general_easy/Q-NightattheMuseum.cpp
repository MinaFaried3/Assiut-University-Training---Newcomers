#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
    int counts = 0;
    string str;
    cin >> str;
    char begin = 'a';
    for (int i = 0; i < str.size(); i++)
    {
        int result = abs(str[i] - begin);

        if (result <= 13) // right
        {
            counts += result;
        }
        else // left
        {
            counts += (26 - result);
        }
        begin = str[i];
    }
    cout << counts << endl;
}
