#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	while (cin >> num1 >> num2)
	{
		long long sum = 0;
		int min = 0, max = 0;
		if (num1 <= 0 || num2 <= 0)
		{
			return 0;
		}
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
		for (int i = min; i <= max; i++)
		{
			cout << i << " ";
			sum += i;
		}
		cout << "sum =" << sum << endl;
	}
}
