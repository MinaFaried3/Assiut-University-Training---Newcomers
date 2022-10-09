#include <iostream>
using namespace std;
int main()
{
    int counts, group, min, num, flag = 1, counter = 0;
    cin >> counts >> group;
    for (int i = 1; i <= counts; i++)
    {
        cin >> num;
        if (flag)
        {
            min = num;
            flag = 0;
        }
        else
        {
            if (min > num)
            {
                min = num;
            }
        }
        counter++;
        if (counter == group || i == counts)
        {
            counter = 0;
            flag = 1;
            cout << min << " ";
        }
    }
}
