#include <iostream>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    int height;
    printf("Give me a height: ");
    cin >> height;

  
    
    for(int width = height; width >= 1; width--)
    {

        int space = width - 1;
        for(int spaces = width - 1; spaces >= 1; spaces--)
        {
            printf(" ");
        }
        for(int hash = height - space; hash >= 1; hash--)
        {
            printf("#");
        }
        printf("\n");
        
    }
    
}