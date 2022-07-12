#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    long long testCase; // 100
    cin >> testCase;
    int counter = 1;
    while (counter <= testCase)
    {                   // 100    1 2 3 4   100 <= 100
        long long numR; // 4
        cin >> numR;
        long long x1, y1, x2, y2, max1, may1, minx2, miny2;
        cin >> x1 >> y1 >> x2 >> y2;
        max1 = x1, may1 = y1, minx2 = x2, miny2 = y2;
        for (int i = 1; i < numR; i++)
        { // 1 2 3      i<4
            cin >> x1 >> y1 >> x2 >> y2;
            max1 = max(max1, x1);
            may1 = max(may1, y1);
            minx2 = min(minx2, x2);
            miny2 = min(miny2, y2);
        }
        if (minx2 > max1 && miny2 > may1)
        {
            cout << "Case #" << counter << ": " << (minx2 - max1) * (miny2 - may1) << endl;
        }
        else
        {
            cout << "Case #" << counter << ": " << 0 << endl;
        }
        counter++;
    }
}