#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>

using namespace std;
void solution1()
{
    // this solution is save more memory than solution2
    int size;
    cin >> size;

    string encode;
    cin >> encode;

    char *decode = new char[size];

    int left = size / 2;
    int right = size / 2;

    int index = 0;
    // vol
    for (int i = size; i > 0; i--)
    {
        if (i == size)
        {
            decode[left] = encode[index];
            left--;
        }

        if (i % 2 == 0) // even -> left
        {
            decode[left] = encode[index];
            left--;
        }
        else // odd -> right
        {
            decode[right] = encode[index];
            right++;
        }

        index++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << decode[i];
    }
}

void solution2()
{
    int size; // 5
    string word;
    //  01234
    // "logva"
    cin >> size >> word;
    string result = "";
    int i = 0;
    while (size)
    { // 5 4 3 2 1
        if (size % 2 == 0)
        { // even
            result = word[i] + result;
        }
        else
        { // odd
            result = result + word[i];
        }
        i++;
        size--;
    }
    cout << result;
}
int main()
{

    // this solution is save more memory than solution2
    solution1();
}