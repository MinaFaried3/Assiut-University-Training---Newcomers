#include <bits/stdc++.h>
using namespace std;
void Solution1()
{
    int myRes1, myRes2;
    //                        0   1   2   3
    string num1; // "160"   ['1,'6','0']
    cin >> num1;
    int size = num1.size();      // 3
    char *num2 = new char[size]; // ['0','6','1']
    int counter = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        num2[counter] = num1[i];
        counter++;
    }
    stringstream s1;
    s1 << num1;
    s1 >> myRes1; // 160
    stringstream s2;
    s2 << num2;
    s2 >> myRes2; // 61
    cout << myRes2 << endl;
    if (myRes1 == myRes2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
void Solution2()
{
    long long e;
    cin >> e;
    long long temp1 = e;
    int f = 0;
    int a = 0;
    int d = 0;
    long long temp = 0;
    int c;
    int b;
    while (e != 0)
    {
        d += f;
        a = e % 10;
        b = e - a;
        c = b / 10;
        d = a;
        temp *= 10;
        temp += d;
        f = a;
        e = c;
    }

    cout << temp << endl;
    if (temp1 == temp)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}
int main()
{
    Solution1();
}