
#include <iostream>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    int numAr[100];
    
    srand(time(NULL));
    /*
    cout << (rand() % 201) - 100<< endl;
    */


    for(int i = 0; i <= 100; i++)
    {
        numAr[i] = rand() % 100;
        cout << numAr[i] << endl;
    }
    

   
        //printf("%s", numAr);
      
}