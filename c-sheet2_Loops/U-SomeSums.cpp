#include <iostream>
using namespace std;
int main()
{
	int number, range1, range2;
	cin >> number >> range1 >> range2;
	long long sum = 0;
	for (int i = 1; i <= number; i++)
	{
		if (i / 10 == 0)
		{
			if (i >= range1 && i <= range2)
			{
				sum += i;
			}
		}
		else
		{
			int myNumber = i; 
			int mySum = 0;
			while (myNumber)
			{							   
				int digit = myNumber % 10; 
				mySum += digit;			   
				myNumber /= 10;			   
			}
			if (mySum >= range1 && mySum <= range2)
			{
				sum += i;
			}
		}
	}
	cout << sum << endl;
}
