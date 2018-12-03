//your name
//name of the program: 20181019b.cpp
//description of what the program does demo arrays.

//inputs
	// none
//outputs
	// print two lines

#include <stdlib.h> // these have to be here
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <iostream>
using namespace std;


int arraySum(int a[], int n)
{
    int initial_sum  = 0;
    return accumulate(a, a+n, initial_sum);
}

int main()
	{
// 	int x; // declare a variable
// 	int y = 39; // declare and initialize a variable
	int month[12] = {31,28,31,30,30,30,31,32,30,29,30,31}; //declare and initialize array
	for (int m = 0; m < 12; m++)
		{
		printf("the %ith month has %i days \n", m+1, month[m]);
		}

		 int n = sizeof(a)/sizeof(a[0]);
		 cout << month[n];
// print out the sum of days in the month (which should be the length of a year)
	}
