
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int firstP;
int secondP;
int thirdP;

int Factorize(int);
int placeValue(int);

bool ones, tens, hundreds = false;

int main()
{
	int counter, init;
	int usIn;

	cout << "Whats your three digit number? ";
	for ( usIn = 0; usIn <= 999; ++usIn)
	{
		placeValue(usIn);
		if (ones == true) {
			cout << usIn;
			int ans = Factorize(usIn);
			printf("\x1b[31m original number %i", usIn);
			printf("\x1b[32 and the new number %i \n", ans);
			bool ones, tens, hundreds = false;
		} else if (tens == true) {
			
			firstP = usIn % 10;
			secondP = (usIn % 100)/10;

			Factorize(firstP);
			Factorize(secondP);
			int ans = firstP + secondP;
			printf("\x1b[31m original number %i \n", usIn);
			printf("\x1b[32 and the new number %i \n", ans);
			bool ones, tens, hundreds = false;
		} else if (hundreds == true) {
		
		firstP = usIn % 10;
		secondP = (usIn % 100)/10;
		thirdP = usIn / 100;

		Factorize(firstP);
		Factorize(secondP);
		Factorize(thirdP);

		int ans = firstP + secondP + thirdP;
		printf("\x1b[31m original number %i \n", usIn);
		printf("\x1b[32 and the new number %i \n", ans);
		
		bool ones, tens, hundreds = false;
		} 
	}

		/*  */

	
	//cout << Factorize(firstP) + Factorize(secondP) + Factorize(thirdP) << endl;
	
}





// Factorization function
int Factorize(int x)
{

	int init = 1;

	for (int counter = 1; counter <= x; counter++)
	{
		init = init * counter;
	}

	return init;

}

int placeValue(int x)
{

	if(x < 9) {
		ones = true;
	} else if ( 9 < x || x < 99) {
		tens = true;
	} else if (99 < x || x < 999) {
		hundreds = true;
	}
	return 0;
}