#include <iostream>
using namespace std;
int main()
{
    long long num1, num2, numGame;
    cin >> num1 >> num2 >> numGame;
    if (num1 % numGame == 0 && num2 % numGame == 0)
    { 
        cout << "Both" << endl;
    }
    else if (num1 % numGame == 0 && num2 % numGame != 0)
    {
        cout << "Memo" << endl;
    }
    else if (num1 % numGame != 0 && num2 % numGame == 0)
    {
        cout << "Momo" << endl;
    }
    else
    {
        cout << "No One" << endl;
    }
}