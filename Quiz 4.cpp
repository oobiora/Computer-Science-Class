/*()
- Create a main class that asks for a string that will be stored in an array
- Create a function that will take each letter of the array one at a time and check to see if it is z
- This func. will require two variables an accumulator (temp) and a conditionary variable that will eventually indicate the stop of the function
- the func returns an int (temp) as an answer and will print out the number of z's in any string up to 1000 characters numbers and letters without spaces.
- If i recreated it I believe I would have to run through the entire string all 1000 chars in order to deal with the space issue.
- However I believe this progam will accomplish the required task
*/

#include <iostream>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

//function that searches for letters
int searchLetter(char usIn[])
{
    //val is the accumulator for the number of z's
    int val = 0;
    //I tells the program to stop at some point
    int i = 0;

    while(i <= strlen(usIn))
    {
        
        if(usIn[i] == 'z'){
            val++;
        }
        i++;
    }
    return val;
}

//MAIN CLASS _____________________
int main()
{
    //char that stores user input
    char usIn[1000];
    cout << "enter a string: ";
    cin >> usIn;
   
   // call and print operation simulatneously 
    cout << "there are: "<<searchLetter(usIn) << "Z's in this string" << endl;

}

