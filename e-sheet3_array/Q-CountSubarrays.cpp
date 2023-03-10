#include <iostream>
using namespace std;
void first_sol()
{
    int size, count = 0, max, flag;
    cin >> size;
    // count = size;
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int row = 0; row < size; row++)
    {
        for (int item = 0; item < (size - row); item++)
        {
            // cout << '[';
            flag = true;
            for (int index = 0; index < row + 1; index++)
            {
                // cout << arr[item + index] << ",";

                if (index == 0)
                {
                    max = arr[item + index];
                }
                else
                {
                    if (max > arr[item + index])
                    {
                        flag = false;
                        break;
                    }
                    else
                    {
                        max = arr[item + index];
                    }
                }
            }
            // cout << ']';
            if (flag)
            {

                count++;
                // cout << count ;
            }
        }
        // cout << endl;
    }
    cout << count << endl;
}

void second_sol()
{
    int size;
    cin >> size;
    int count;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[size];
    }
    count = size;
    int index = 0;
    int item = 0;

    while (true)
    {
        if (item == size - 1)
        {
            break;
        }
        if (arr[index] > arr[index + 1])
        {
            ++item;
            index = item;
            continue;
        }
        ++count;
        ++index;

        if (index == size - 1)
        {
            ++item;
            index = item;
        }
        // cout << "count is " << count << endl;
    }
    cout << count << endl;
}

void third_sol()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    int counter = 0;
    for (int i = 0; i < size; i++)
    {

        for (int x = i; x < size; x++)
        {
            if (i == x)
            {
                counter++;
                continue;
            }

            if (arr[x] > arr[x - 1])
                counter++;
            else
                break;
        }
    }

    cout << counter << endl;
}
int main()
{

    int cases;
    cin >> cases;
    while (cases--)
    {
        third_sol();
    }
}