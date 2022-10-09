#include <iostream>
using namespace std;

int main()
{
    double double_num;
    cin >> double_num;
    int int_Num = double_num;
    double result = double_num - int_Num;
    if (result != 0)
        cout << "float " << int_Num << " " << result << endl;

    else
        cout << "int " << int_Num << endl;
}