#include <iostream>
#include <cmath>
using namespace std;
int prime1(int num)
{
	int div = num / 2;
	for (int i = 2; i <= div; i++)
	{
		if (num % i == 0)
		{
			return -1;
		}
	}
	return num;
}
int prime2(int num)
{

	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return -1;
		}
	}
	return num;
}
int main()
{
	int counter;
	cin >> counter;
	for (int i = 2; i <= counter; i++)
	{
		int res = prime2(i);
		if (res != -1)
		{
			cout << res << " ";
		}
	}
}
