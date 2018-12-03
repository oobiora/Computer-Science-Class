//your name
//name of the program: 20181102a.cpp
//description of what the program does - demonstrates in-place function.

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

int fun(int); //prototype for the function

int main()
	{
	// get an int
	int i;
	printf("Enter an int: ");
	cin >> i;
	// pass it to the function fun()
	int result = fun(i);
	// print the results
	printf("fun() returned %i \n", result);
	}
	
int fun(int x) // function definition
	{
	return x*x;
	}

