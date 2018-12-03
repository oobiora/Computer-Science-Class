//Initiate main class
//create an array that can hold 1000 chars
//randomize the random number generator
// loop through each member of the array and store a random char from a - z 
// create a new loop to search for pairs by compairing each number with the number infront of it
// print out the number of pairs

#include <iostream>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() //Initiate main class

{
    char randlet[1000]; //create an array that can hold 1000 chars
    srand(time(NULL));
    
    // loop through each member of the array and store a random char from a - z 
    for(int i = 0; i <= 999; i++)
    {
        randlet[i] = 'a' + rand() % ('z' - 'a' + 1);
    }

// create a new loop to search for pairs by compairing each number with the number infront of it
    for(int i = 0; i <= 999; i++)
    {
        cout << randlet[i] << " ";
    }
    int temp = 0;
    
    for (int z = 0; z <= 999; z+=2)
    {
        if (randlet[z] == randlet[z+1])
        {
            temp++;
        }
        
    }
    // print out the number of pairs

    cout << "there are: " << temp << " many pairs." << endl;



}