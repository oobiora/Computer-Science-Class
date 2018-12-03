

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <iostream>

using namespace std;
void value (float);
void value (double);

int main() 
{

	long x, y;

	// Prompt for integers stored in long interger boxes called x and y 
	printf("Give me an integer: ");
	cin >> x;
	cout << "give me a second integer: ";
	cin >> y;

	// variable alternatives as floats for division
	float secondX = x;
	float secondY = y;

	if (y == 0) {
		printf("you can't divide by zero buddy\n");
		return 0;
	}

	//this outputs all four operations, square, multiplication, modulo, and division \\
	printf("the integer is: %li \n", x);
	long xsq = x*x;
	printf("the number %li %s %li\n", x, "sqaured equals", xsq);
	long mod = x % y;
	printf("the number modulo is: %li \n", mod );
	double division = secondX / secondY;
	printf("the numbers divided x over y : %f \n", division);
	long mult = x * y;
	printf("the numbers multiplied x * y : %li \n", mult);



	

} 

/* EXPERIMENTAL SECTION

	// this program asks for an integer and prints it out

	int inputNum;
	cout << "gimme an int: ";
	cin >> inputNum;

	cout << "Your int is; "<< inputNum << endl;



	{
	//  HW due Monday that sqaures a number and modulos two numbers and prints both operations output.
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

	}

	//Program that adds two numbers and subtracts two numbers and prints their output
	
	{
		int x;
		int y;
		cin >> x;
		cin >> y;
	int numOne = 4;
	int numTwo = 7;

	int addNum = x + y;
	int subNum = x - y;
	
	

	printf("The original numbers and the added and subtracted numbers: %i, plus or minus %i,equals %i, or %i \n", numOne, numTwo, addNum,subNum);
	}

	
	// This program declares a variable
	{

	int count;
	cout << count;
	count = 2;
	cout << "the first count: " << count << "\n"; 
	count = 8;
	cout << "the second count: " << count << "\n";
	int y = count;
	printf("current count: %i, and the y value %i\n",count,y);

	}
	
	//pointers and arrays
	*/
