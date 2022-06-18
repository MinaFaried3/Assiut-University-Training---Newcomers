#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int size, query_num;
    cin >> size >> query_num;
    string str;
    cin >> str;
    while (query_num--)
    {
        string query;
        cin >> query;
        int left, right;
        if (query == "pop_back")
        {
            str.pop_back();
        }
        else if (query == "front")
        {
            cout << str.front() << endl;
        }
        else if (query == "back")
        {
            cout << str.back() << endl;
        }
        else if (query == "sort")
        {

            cin >> left >> right;
            // sort(str.begin() + min(left, right) - 1, str.begin() + max(left, right));
            sort(&str[min(left, right) - 1], &str[max(left, right)]);
        }
        else if (query == "reverse")
        {
            cin >> left >> right;
            // reverse(str.begin() + min(left, right) - 1, str.begin() + max(left, right));
            reverse(&str[min(left, right) - 1], &str[max(left, right)]);
        }
        else if (query == "print")
        {
            int pos;
            cin >> pos;
            cout << str[pos - 1] << endl;
        }
        else if (query == "substr")
        {
            cin >> left >> right;
            for (int i = min(left, right) - 1; i < max(left, right); i++)
            {
                cout << str[i];
            }
            cout << endl;
        }
        else if (query == "push_back")
        {
            char x;
            cin >> x;
            str.push_back(x);
        }
    }
}