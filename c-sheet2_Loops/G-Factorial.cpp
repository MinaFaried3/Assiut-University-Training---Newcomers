#include <iostream>
using namespace std;
int main()
{
	int counter; 
	cin >> counter;
	long long fac = 1;
	while (counter--)
	{				
		int num;	
		cin >> num; 
		for (int i = 1; i <= num; i++)
		{			  
			fac *= i; 
		}
		cout << fac << endl; 
		fac = 1;
	}
}
