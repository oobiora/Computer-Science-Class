#include <iostream>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    // Ask for the size of the Array -------------------------
    cout << "What is the size of the array: ";
    int size_array;
    cin >> size_array;

    // Declare the Array ----------------------
    int leaArray[size_array];

    srand(time(NULL)); // makes the array random-er

    // asks for the max possible number for the array
    int max_num;
    cout << "Give me the max number: ";
    cin >> max_num;



    // Sets each part of array to equal a random number less than the max
    for (int i = 0; i <= size_array; i++)
    {
        leaArray[i] = rand() % max_num;
        cout << leaArray[i] << endl;
    }
    

    // Creates an int that the computer will search the array for
    // the user is prompted for the search int
    int search_int;
    cout << "what int do you want to search for: ";
    cin >> search_int;


    
    int acc = 0;
    for (int i = 0; i <= size_array; i++)
    {

        if (leaArray[i] == search_int)
        {
            acc += 1;
        }
    }
    cout << search_int << " appears " << acc << " times" << endl;
}
