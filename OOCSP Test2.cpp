//ALGO
//prompt for user input (type int)
//modulo 10 for the first place
//modulo 100 and divide by ten for the second place
//modulo 1000 and divide by 100 for the third place

//store each place value as seperate int variable
//add int vars together


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{

cout << "Whats your number? ";
int usIn;
cin >> usIn;
cout << endl;

int firstP = usIn % 10;
cout << "The first place is: "<< firstP << endl;

int secondP = (usIn % 100)/10;
cout << "The second place is: "<< secondP << endl;

int thirdP = (usIn % 1000) / 100;
cout << "The third place is: "<< thirdP << endl;


int checkSum = firstP + secondP + thirdP;
checkSum = abs(checkSum);
cout << "final number is: " << checkSum << endl;

}
