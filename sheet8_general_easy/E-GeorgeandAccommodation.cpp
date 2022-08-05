#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    int rooms, validRooms = 0, num, capacity;
    cin >> rooms;
    while (rooms--)
    {
        cin >> num >> capacity;
        if (capacity - num >= 2)
        {
            validRooms++;
        }
    }

    cout << validRooms;
}