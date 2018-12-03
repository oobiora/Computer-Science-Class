#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <iostream>
#include <iomanip>
using namespace std;

void swap(int *, int *); // prototype

void printArray(int []);

size_t arrlen(int *);

int main()
{

srand(time(NULL));
    int ar[200];

    int test[144];

    for(int i = 0; i <= 199; i++)
    {
        ar[i] = 50 + rand() % (200 - 50 + 1);
    }



    for(int i = 0; i <= (199); i++)
   { 

        for (int n = 0; n <= 198; n++)
        {
                if (ar[n] > ar[n+1])
            {
                swap(&ar[n], &ar[n+1]);
            } 
        }
    }

//^ sorts, goes through the loop 100 times comparing adjacent numbers and swaping the bigger one with the smaller one

    printArray(ar);


    //cout << "gimme a number:";
    int userNumber;
    //cin >> userNumber;


    // binary search

    bool left;
    bool right;

    cout << endl << "has this many parts: " << arrlen(test) << endl;

    





} // end of main()

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
    
}


void printArray(int a[]) // JUST A FUNCTION THAT PRINTS THE ENTIRE ARRAY SEPERATED BY SPACES
// if you care about this function I will teach it to you.

// all it does is do exactly what you know how to do but just in function form for ease of access.
// I have changed my mind I dont want to explain it just know it works. <3
{
    for(int i = 0; i <= 199; i++)
    {
        cout << setw(5) << right << left << a[i];
    }
}

size_t arrlen(int *s) {
    size_t i;
    for (i = 0; s[i] != '\0'; i++) ;
    return i;
}