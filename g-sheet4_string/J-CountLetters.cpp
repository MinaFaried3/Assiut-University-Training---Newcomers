#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void solution1()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    int count = 0;
    char prev;
    for (int i = 0; i < str.size(); i++)
    {
        if (i == 0)
        {
            prev = str[i];
            count++;
        }
        else if (str[i] == prev)
        {
            count++;
        }
        else if (str[i] != prev)
        {
            cout << prev << " : " << count << endl;
            prev = str[i];
            count = 1;
        }
    }
    // for last letter
    cout << prev << " : " << count << endl;
}

void solution2()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    int size = str.size();
    for (int i = 0; i < size; i++)
    {
        char chr = str[i];
        int counter = 1;
        while (str[i] == str[i + 1])
        {
            counter++;
            i++;
        }

        cout << chr << " : " << counter << endl;
    }
}

void solution3()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    int frequency[124]{0};

    for (size_t i = 0; i < str.size(); i++)
    {
        frequency[str[i]]++;
    }

    for (size_t i = 0; i < 124; i++)
    {
        if (frequency[i])
            cout << (char)i << " : " << frequency[i] << endl;
    }
}
int main()
{
    solution3();
}