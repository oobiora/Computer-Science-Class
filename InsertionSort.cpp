#include <iostream> //dont worry
#include <math.h> //dont worry
#include <string.h> //dont worry
#include <time.h> //dont worry
#include <stdlib.h> //dont worry
#include <stdio.h> // dont worry

using namespace std; // dont worry

void rightShift(int [], int, int); // prototype

void printArray(int []); // also a prototype dont start crying just yet

int main()
{
   int counter = 0; // dont worry about this

    // Declare the Array ----------------------
    int usArray[200]; // calm down were not on the hard part yet

    srand(time(NULL)); // makes the array random-er

    // Sets each part of array to equal a random number less than the max
    for (int i = 0; i <= 199; i++)
    {
        usArray[i] = rand() % 100; // randomized obviously just accept to debate it ok
       
    }
    cout << "old: " << endl; // dont worry about this
    printArray(usArray); // prints the original scrambled array. dont cry just breath. Its using a function that I created so dont piss your pants ok
    cout << endl << endl; // dont worry about this



    //___________________________THIS STUFF IS ONLY A LITTLE CONFUZING AT FIRST_________________________________________________
    for(int i = 1; i <= 199; i++) // this number usArray[i] (i is the place in the array) is the piece of the array about to be sorted
    // so i just represents what is set to be sorted. [[so i - 1 is already sorted as long as i > 0;]] < if you dont understand that dont think about it

    {
      for(int n = 0; n <= i; n++) // This enitre loop is just about sorting i into its place. nothing else!
      // it works by starting at the first number in the array and checking to see if i is less than it. if it is it shifts the array to the right 
      //and stuffs i into its correct sorted place. 
      // this is a basic understanding of this block of code. for more keep reading
      {
          if(usArray[i] < usArray[n]) // so the loop as we speak is finding if variable i is less than anything to the left of it
          // if it finds something that it is smaller than than the following things happen.
          {
              rightShift(usArray, n, i); // it preforms the right shift function. Scroll down to the actuall function code to see how it works
              cout << "interval: " << endl; // dont worry about this
              counter += 1; // dont worry about this
              printArray(usArray); // it prints the array. this is the same as printf okay. just chill Lea
              // the reason I print here is so that your terminal will print out every iteration, or step that the algorithm had to do in order to 
              // sort this. ok. If you dont like it. cry about it ok.
              cout << endl << endl; // dont worry about this
          } 
      }
    }
                        
                      
    
    cout << "new: " << endl; // dont worry about this
    printArray(usArray); // PRINTS OUT THE FINAL ARRAY. THATS IT!
    cout << endl << endl << "the loop iterated "  << counter << " times"; // dont worry about this
    


}

void rightShift(int a[], int start, int stop) // FUNCTION THAT SHIFTS ENTIRE BLOCKS OF ARRAYS TO THE RIGHT.
// AND STORES THE LAST PIECE OF THE ARRAY AS THE FIRST ONE
//NOT AS COMPLEX AS YOU THINK
{

    // OKIE DOKIE here is how the right shift function works


    // the function has a start and a stop. meaning that it shifts everything from the start to the stop up one place in the array
    //it also sets the last thing as the first thing so that the array makes a full shift up and loops the first number down to the end
    int temp = a[stop]; // this is where I set the last number to a temp value. More on this in a second. calm down Lea your about to cry

        for(int i = stop; i >= start+1; i--) // this loop now goes through the array from start to stop. and...
            {
            a[i] = a[i-1]; // makes it equal the thing behind it. that shifts everything from the left to the right. nothing crazy ok 
            //(the start+1) in the line above is how I fixed a bug with numbers less than zero that dont exist. dont worry about that
            //if you dont understand ok. Just relax. You too Meg. And you too Cole. and Ben and maybe Ryan. Just relax. 
            }
    a[start] = temp; // lastly I set the start of the right shift to equal the temp value I saved. Noting crazy just a three way swap over a gap.
    // gap = code that I dont want to distrub.
    return; // dont worry about why the function looks like this or smells like this just know that it works.
}


void printArray(int a[]) // JUST A FUNCTION THAT PRINTS THE ENTIRE ARRAY SEPERATED BY SPACES
// if you care about this function I will teach it to you.

// all it does is do exactly what you know how to do but just in function form for ease of access.
// I have changed my mind I dont want to explain it just know it works. <3
{
    for(int i = 0; i <= 199; i++)
    {
        cout << a[i] << " ";
    }
}


