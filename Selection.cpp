#include <iostream>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
void swapNum( int*, int*);

int main(){

    int usArray[200];

cout << "unsorted array: " << endl;
    for(int i = 0; i <= 199; i++)
    {
        usArray[i] = 85 + rand() % (122 - 85 + 1);
    
        cout << usArray[i] << " ";
    } 

cout << endl << "Sorted Array: " << endl;
    for(int x = 0; x <= 199; x++) // loop thru array
    {

        for(int i = x+1; i <= 199; i++) 
        {
            if(usArray[x] > usArray[i])
            {
                swapNum(&usArray[x], &usArray[i]);
            }   
        }

        
        cout << usArray[x] << " ";
    }

}

void swapNum(int *a ,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}