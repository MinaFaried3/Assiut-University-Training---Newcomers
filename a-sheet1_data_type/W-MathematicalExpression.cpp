#include <iostream>
using namespace std;
void validate(int result, int myResult)
{
    if (myResult == result)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << myResult << endl;
    }
}
int main()
{
    int num1, num2, result;
    char opr, equalChr;
    int finalResult;
    cin >> num1 >> opr >> num2 >> equalChr >> result;

    switch (opr)
    {
    case '+':
        finalResult = num1 + num2;
        break;
    case '-':
        finalResult = num1 - num2;
        break;
    case '*':
        finalResult = num1 * num2;
        break;
    }
    validate(result, finalResult);
}