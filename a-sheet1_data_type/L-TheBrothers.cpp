#include <iostream>
using namespace std;
int main()
{
    string personName1, personName2, fatherName1, fatherName2;
    cin >> personName1 >> fatherName1 >> personName2 >> fatherName2;

    if (fatherName1 == fatherName2)
    {
        cout << "ARE Brothers";
    }
    else
    {
        cout << "NOT";
    }
}