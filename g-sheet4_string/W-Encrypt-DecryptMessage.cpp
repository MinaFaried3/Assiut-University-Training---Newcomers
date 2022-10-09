#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string str;

   
    int type;
    cin >> type;
    cin >> str;
    if (type == 1)
    {
        for (int i = 0; i < str.size(); i++)
        {
        
            for (int j = 0; j < original.size(); j++)
            {
                if (str[i] == original[j])
                {
                    cout << key[j];
                    break;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < str.size(); i++)
        {

            for (int j = 0; j < key.size(); j++)
            {
                if (str[i] == key[j])
                {
                    cout << original[j];
                    break;
                }
            }
        }
    }
}