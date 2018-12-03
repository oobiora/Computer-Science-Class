

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;


int firstP;
int secondP;
int thirdP;

int Factorize(int);




int main()
{
	int counter, init;
	int usIn;

	cout << "Whats your three digit number? ";
	cin >> usIn;
	cout << endl;

	firstP = usIn % 10;
	cout << firstP << endl;

	secondP = (usIn % 100)/10;
	cout << secondP << endl;

	thirdP = usIn / 100;
	cout << thirdP << endl;

	
	cout << Factorize(firstP) + Factorize(secondP) + Factorize(thirdP) << endl;
	
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






/*int main()
{
	cout << "Temp in C: ";
	float C, F;
	cin >> C;
	F = (C + 40.0) * (9.0/5.0) - 40.0;
	cout << "temp in F is " << F;

	cout << "Temp in F: ";
	cin >> F;
	C = (F + 40.0) * (5.0/9.0) - 40.0;
	cout << "temp in C: ";

}*/