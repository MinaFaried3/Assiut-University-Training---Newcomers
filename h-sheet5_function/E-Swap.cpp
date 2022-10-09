#include <iostream>
#include <string>
using namespace std;
void swap_ref(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

// notice the function name //use swap to run
void swap_Ptr(int *num1, int *num2)
{
    int *box = num1;
    num1 = num2;
    num2 = box;
}
void swap(int *num1, int *num2)
{
    int *box = num1;
    num1 = num2;
    num2 = box;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    swap(num1, num2);
    cout << num1 << " " << num2;
}
