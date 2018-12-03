
//This is a factorization program that prints out the factorization of the first five positive integers and also the sum



#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string>
using namespace std;

int Factorize(int);

int main()
{

// Factorization test

	cout << Factorize(3) << " That should be six" << endl;

//strg. int for holding the sum of factorials
	int stable = 0;
// loop that factorizes the first five ints
	for(int i = 1; i <= 5; i++)
	{
		cout << Factorize(i) << endl;
		stable += Factorize(i);
	}
	//prints out the sum of the five factorials
	cout << "final answer " << stable << endl;
}




// Function that takes a number and multiplies it by the next number untill the number that we are trying to factorize is reached
int Factorize(int x)
{

	int init = 1;

	for (int counter = 1; counter <= x; counter++)
	{
		init = init * counter;
	}

	return init;

}
