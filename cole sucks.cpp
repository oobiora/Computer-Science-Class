
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <iostream>

using namespace std;

int main() 
{

	long x;
	long y;
	printf("Give me an integer: ");
	cin >> x;
	cout << "give me an integer to modulo\n";
	cin >> y;
	printf("the integer is: %li \n", x);
	long xsq = x*x;
	printf("the number %li %s %li\t", x, "sqaured equals", xsq);
	long mod = x % y;
	printf("the number modulo is: %li \n", mod );




	long x = x * x;
	int numOne = 4;
	int numTwo = 7;

	int addNum = x + y;
	int subNum = x - y;

	printf("The original numbers and the added and subtracted numbers: %i, plus or minus %i,equals %i, or %i \n", numOne, numTwo, addNum,subNum);

}