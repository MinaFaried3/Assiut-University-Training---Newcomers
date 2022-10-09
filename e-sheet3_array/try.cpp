#include <iostream>
using namespace std;

int countVowelStrings(int n)
{
    int arr[] = {1, 1, 1, 1, 1};

    while (--n)
    {
        for (int i = 3; i >= 0; i--)
        {
            arr[i] += arr[i + 1];

            if (i == 0)
                break;
        }
    }

    return arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
}
int main()
{

    cout << countVowelStrings(2);
}
