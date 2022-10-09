#include <iostream>
using namespace std;
int main()
{
	double num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	double result = (num1 * num2) / num3; 
	long long myNumber = result;		  
	double myRes = result - myNumber;	  
	if (myRes > 0)
	{
		cout << "double" << endl;
	}
	else if (myNumber <= 2147483647)
	{
		cout << "int" << endl;
	}
	else
	{
		cout << "long long" << endl;
	}
}
