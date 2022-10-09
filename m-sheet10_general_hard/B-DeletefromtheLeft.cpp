#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;
#define lol long long int

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    stack<char> stack1; 
    stack<char> stack; 
    for (int i = 0; i < str1.size(); i++)
    {
        stack1.push(str1[i]);
    }
    for (int i = 0; i < str2.size(); i++)
    {
        stack.push(str2[i]);
    }
    while (!stack1.empty() && !stack.empty())
    {
        if (stack1.top() != stack.top())
        {
            break;
        }
        stack1.pop();
        stack.pop();
    }
    cout << stack1.size() + stack.size() << endl;
}