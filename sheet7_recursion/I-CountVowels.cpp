#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;

int checkVowel(char chr)
{

    return (chr == 'A' || chr == 'a' || chr == 'E' || chr == 'e' || chr == 'U' || chr == 'u' || chr == 'O' || chr == 'o' || chr == 'i' || chr == 'I');
}
int countVowels(string str, int index)
{
    if (index == -1)
    {
        return ;
    }

    return checkVowel(str[index - 1]) + countVowels(str, index - 1);
}
int main()
{
    string str;
    getline(cin, str);

    cout << countVowels(str, str.size());
}