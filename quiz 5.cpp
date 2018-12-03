

#include <iostream>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    int randnum[10010]; //create an array that can hold 1000 chars
    srand(time(NULL));


    
    // loop through each member of the array and store a random char from a - z 
    cout << "original: " << endl;
    for(int i = 0; i <= 9999; i++)
    {
        randnum[i] = 100 + rand() % (105 - 100+ 1);//75 + rand() % (96 - 75 + 1);
        cout << "|" << randnum[i];// << "|";
    }
    cout << endl << "new: " << endl;

    int temp;
    
    for(int n = 0; n <= 9999; n++)
    {
        for(int i = (n+1); i <= 9999; i++)
    {
        if (randnum[n] < randnum[i])
        {
            temp = randnum[n];
            randnum[n] = randnum[i];
            randnum[i] = temp;
        } 
    }
    }


    

    for(int i = 0; i <= 9999; i++)
    {
        cout << "|" << randnum[i];// << "|";
    }
    

}
