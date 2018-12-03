
//


#include <iostream>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
srand(time(NULL));
using namespace std;

int main()

{
    char randlet[1000];
    
    
    for(int i = 0; i <= 999; i++)
    {
        char temp = 'A' + rand() % ('z' - 'A' + 1);
        randlet[i] = 
    }

    cout << "what number do you want to scan for: ";
    char scanNum;
    cin >> scanNum;
    int temp = 0;
    for (int i = 0; i <= 999; i++)
    {
        
        if(randlet[i] == scanNum){
            ++temp;
        }
    }
    cout << temp << endl;



}