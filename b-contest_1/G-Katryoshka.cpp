#include <iostream>

using namespace std;

void solution1()
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

void solution2()
{
    long long eyes, mouth, body;
    cin >> eyes >> mouth >> body;
    long long counter = 0;
    if (eyes == 0 || body == 0)
    {
        cout << 0;
        return;
    }

    // 24 90 80

    if (mouth > 0)
    {
        long long min_ = min(eyes, min(body, mouth));

        counter += min_;
        eyes -= min_;
        mouth -= min_;
        body -= min_;
    }

    if (eyes > 0 && body > 0)
    {
        eyes /= 2;
        long long min_ = min(eyes, body);
        counter += min_;
    }

    cout << counter;
}
int main()
{
    solution1();
}