#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <iostream>
using namespace std;

void swap(int *, int *); // prototype

int main()
{

srand(time(NULL));
    int ar[100];

    for(int i = 0; i <= 99; i++)
    {
        ar[i] = 200 + rand() % (250 - 200 + 1);
    }

    // ^ injects a random number between 200 and 250 into each element of an array




    for(int i = 0; i <= (100); i++)
   { 

        for (int n = 0; n <= 98; n++)
        {
                if (ar[n] > ar[n+1])
            {
                swap(&ar[n], &ar[n+1]);
            } 
        }
    }

//^ sorts, goes through the loop 100 times comparing adjacent numbers and swaping the bigger one with the smaller one


    for(int i = 0; i <= 99; i++)
    {
        cout << i+1 << " term equals: " << ar[i] << endl;
    }

// ^ prints the array out

} // end of main()

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
    
}
// ^ function that can swap and return both arrays by changing the pointer not the temp variable.