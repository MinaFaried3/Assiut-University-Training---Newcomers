#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    
    int size;
    int arr[26] = {0};
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        char ch;
        cin >> ch;
        arr[(int)ch - 97]++;
    }

    for (int i = 0; i <= 25; i++)
    {

        while (arr[i] != 0)
        {

            cout << (char)(i + 97);
            arr[i]--;
        }
    }
   
}