#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string url = "http://www.cleartrip.com/signin/service?username=test&pwd=test&profile=developer&role=ELITE&key=manager";
    bool start = false;
    for (int i = 0; i < url.size(); i++)
    {
        if ((url[i] == '?' || url[i] == '&') && !start)
        {
            start = true;
            continue;
        }

        if (start)
        {
            if (url[i] != '=' && url[i] != '&')
            {
                cout << url[i];
            }
            else if (url[i] == '=')
            {
                cout << ": ";
            }
            else if (url[i] == '&')
            {
                cout << endl;
            }
        }
    }
}