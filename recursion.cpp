
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
int fact2(int);

int main()
{
  int facts[10] = {1,2,3,4,5,6,7,8,9,10};
  int answer = 1;

  for (int i = 0; i <= 9; i++) {
    printf("the number is %i\n",fact2(facts[i]) );
  }

}

int fact2(int n)
{
  int stable = 1;
  for (int i = 1; i <= n; i++) {
    stable *= i;
  }
  return stable;
}
