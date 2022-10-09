#include <iostream>
using namespace std;
int main()
{
	int counter;
	cin >> counter;
	if (counter == 1)
	{
		cout << -1;
		return 0;
	}
	for (int i = 1; i <= counter; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
	}
}
