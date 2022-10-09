#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
   int age;
    cin >> age;
    int year = age / 365;
    cout << year << " years" << endl;
    age -= year * 365;
    int month = age /  30;
    cout << month << " months" << endl;
    age -= month * 30;
    int day = age ;
    cout << day << " days" << endl;

}