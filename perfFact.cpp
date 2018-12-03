#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main()

{
	int x;
	cin >> x; 

	int factNum = 1;

	for (int i = 1; factNum <= x; ++factNum)
	{
		i = i * factNum;
		printf("the number %i \n", i);
	}



}