#include <iostream>

using namespace std;
int main()
{
    long long eye, mouth, body, num;
    cin >> eye >> mouth >> body;
    num = 0;

    if (eye != 0 && body != 0)
    {
        if (mouth >= eye && mouth >= body && eye != 0 && body != 0)
        {
            if (eye >= body)
            {
                num = body;
            }
            else if (body >= eye)
            {
                num = eye;
            }
        }
        else if (eye <= mouth && eye <= body)
        {
            num = eye;
        }
        else if (body <= mouth && body <= eye)
        {
            num = body;
        }
        else if (mouth <= body && mouth <= eye)
        {
            num += mouth;
            eye -= mouth;
            body -= mouth;

            if (eye / 2 <= body)
            {
                if (eye % 2 == 0)
                {
                    eye = eye / 2;
                    num += eye;
                }
                else
                {
                    eye -= 1;
                    eye = eye / 2;
                    num += eye;
                }
            }
            else
            {
                num += body;
            }
        }
    }
    cout << num;
}