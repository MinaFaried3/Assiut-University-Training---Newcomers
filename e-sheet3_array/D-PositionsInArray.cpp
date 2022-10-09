#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int *A = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
        if (A[i] <= 10)
        {
            cout << "A[" << i << "]"
                 << " = " << A[i] << endl;
        }
    }
}