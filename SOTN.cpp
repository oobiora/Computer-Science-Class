#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int stable = 0;
	int acc;

	for (acc = 0; stable <= (x - 2); stable+=2)
	{
		acc = acc + stable;
		cout << stable << endl;
	}

	cout << "final number: " << i << endl;









	//odd

	for (i = 1; stable <= (x - 2); stable+=2)
	{
		i = i + stable;
		cout << stable << endl;
	}

	cout << "final number: " << i << endl;

	return 0;
}
