#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main() 
{
	int x;
	printf("What number do you want to factorize?\n");
	cin >> x;
	cout << endl;

	long int i = 1;
	for (int stable = 1; stable <= x; stable++)
	{

		i = i * stable;
	}

	printf("the number %i factorized is %li \n", x, i);


}