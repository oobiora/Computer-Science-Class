#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <iostream>
using namespace std;

//User types a number
// Modulo 10 and print out the remainder -> storing the answer to a temporary number
// print the temp number
//divide the usIn by ten
//loop until the modulo equals zero

int main ()
{
  long int usIn;
  cin >> usIn;
  int numTemp;

  for(bool i = true;i == true; usIn /= 10)
  {
    numTemp = usIn % 10;
    if(numTemp != 0)
    {cout << numTemp << endl;}
    else
    {i = false;}


  }



}
