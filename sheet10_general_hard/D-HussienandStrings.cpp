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
    if (str1.size() != str2.size())
    {
        cout << "NO";
        return 0;
    }
    int flag = 0;
    if (str1 == str2)
    {
        sort(str1.begin(), str1.end());
        for (int i = 0; i < str1.size() - 1; i++)
        { // i<2 0 1
            if (str1[i] == str1[i + 1])
            {
                // 012
                // abb
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        int dif = 0;
        int index1, index2;
        int counter = 0;
        bool close = true;
        for (int i = 0; i < str1.size(); i++)
        { 
            if (str1[i] != str2[i])
            {             
                dif++;  
                counter++; 
            }
            if (dif == 1 && close)
            {
                index1 = i;
                close = false;
            }
            if (dif == 2)
            {
                index2 = i;
                break;
            }
        }
        if (counter == 2)
        {
            swap(str1[index1], str1[index2]);
            if (str1 == str2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}