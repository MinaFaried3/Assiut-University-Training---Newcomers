#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
#define lol long long int
/*
  a b
  1 2
  3 4
  c d

  3
  7

  4
  7

  5
  5

  r1 = a+b
  r2 = c+d

  c1 = a+c
  c2 = b+d

  d1=  a+d
  d2=  b+c

  a+b-r1 = a+c-c1
  b-r1 = c-c1
  b-c-r1+c1=a+d

*/
int main()
{
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    for (int a = 1; a <= 9; a++)
    { // 1
        for (int b = 1; b <= 9; b++)
        { // 2
            for (int c = 1; c <= 9; c++)
            { // 3
                for (int d = 1; d <= 9; d++)
                { // 4
                    if (a != b && a != c && a != d && b != c && b != d && c != d)
                    {
                        if (a + b == r1 && a + d == d1 && c + d == r2 &&
                            a + c == c1 && b + d == c2 && b + c == d2)
                        {
                            cout << a << " " << b << endl;
                            cout << c << " " << d << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout << -1 << endl;
}