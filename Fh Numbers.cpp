#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main() 

{
	int usIn;
	cout << "Type a number. I will print the sum of the first hundred numbers ";
	cin >> usIn;
	int stable = 1;
	int n;

	usIn = usIn % 100;
	if (usIn == 0) 
	{
		usIn = 100;
	}

	for (n = 0; stable <= usIn; ++stable)
	{
		n += stable;
		cout << n << endl;
		
	}

	




}