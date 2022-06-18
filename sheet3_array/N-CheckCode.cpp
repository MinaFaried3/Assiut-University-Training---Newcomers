#include <iostream>
using namespace std;
int main()
{
    int left, right;
    string result;
    cin >> left >> right;
    cin >> result;
    bool flag = false;
    if (result[left] != '-' || result.size() != left + right + 1 || result[result.size() - 1] == '-' || result[0] == '-')
    {
        cout << "No";
        return 0;
    }

    for (int i = 0; i < result.size(); i++)
    {
        if (i == left && result[i] == '-')
        {
            continue;
        }
        if (result[i] - '0' >= 0 && result[i] - '0' <= 9)
        {
            flag = true;
            continue;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "Yes";
    else
        cout << "No";
}