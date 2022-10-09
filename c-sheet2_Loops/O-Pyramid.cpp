#include <iostream>
using namespace std;
int main()
{
	int counter;
	cin >> counter;
	for (int i = 1; i <= counter; i++)
	{
		for (int z = 1; z <= i; z++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
