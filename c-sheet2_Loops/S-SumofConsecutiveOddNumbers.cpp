#include <iostream>
using namespace std;
int main()
{
	int counter; // 3
	cin >> counter;

	while (counter--)
	{							 // 3 2 1 0
		int num1, num2, sum = 0; // 7 2
		cin >> num1 >> num2;
		int min, max; // 2 7
		if (num1 >= num2)
		{
			max = num1;
			min = num2;
		}
		else
		{
			max = num2;
			min = num1;
		}
		for (int i = min + 1; i <= max - 1; i++)
		{ // 2 3 4 5 6 7
			if (i % 2 != 0)
			{ //  5 / 2 = 2.5
				sum += i;
			}
		}
		cout << sum << endl;
	}
}
