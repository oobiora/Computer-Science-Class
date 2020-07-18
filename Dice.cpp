#include <iostream>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

//This program is in response to my Mythbusters class where the myth was proposed that rolling two dice will have the equal probability of summing any number (2) to (12)
//This program creates a class called Dice that holds the number of a roll and the function to roll the dice
class Dice{ // creates function Dice
        private:
            
        public:

        
            int diceNum; // dices current number

            void rollDice(void) // function to roll the dice
            {              
                diceNum = 1 + rand() % (6 - 1 + 1); 
            }

    };

float diceStats(int*, int); // initializing function
/*
    -  This function takes an array and a 'scan for' number to search for a particular number to see its frequency it returns its frequency divided by the total number
    of numbers in the array * 100 so that it is a percentage.
    -return type is a float 
*/

int main(int argc, char const *argv[])
{

    srand(time(NULL)); //seeding the randomizer

    Dice dice_one; //dice one declared as object of the class Dice
    Dice dice_two; //dice two declared as object of the class Dice

    int totalRolls[1000000]; // array that can hold 10000 integers every roll sum

    cout << "rolling..." << endl; // beautification 

    for(int i = 0; i <= 999999; i++) // this rolls the dice 10000 times and stores the sum of each roll to a spot in an array
    {
        totalRolls[i] = dice_one.diceNum + dice_two.diceNum;
        dice_one.rollDice();
        dice_two.rollDice();
    }

    cout << "done rolling..." << endl;// pretty

    for(int i = 2; i <= 12; i++) // goes through and prints the percentage of each sum appearing (2) to (12)
    {
        cout << "the percentage of it rolling: " << i << " is " << diceStats(totalRolls, i) <<" percent"<<endl;
    }

}

float diceStats(int a[], int search) // Dice stats as mentioned above
{
    float acc = 0;
    for(int i = 0; i <= 999999; i++)
    {
        if(a[i] == search)
        {
            acc++;
        }
    }
    return (acc/1000000) * 100; // returns percentage
}
