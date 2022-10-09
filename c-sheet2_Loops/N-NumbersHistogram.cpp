#include <iostream>
using namespace std;
int main()
{
	char symbol;
	cin >> symbol;
	int lines;
	cin >> lines;
	for (int i = 1; i <= lines; i++)
	{
		int times;
		cin >> times;
		while (times--)
		{
			cout << symbol;
		}
		cout << endl;
	}
}
