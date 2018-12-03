

// enter a number - as a string
// store each digit in an array
// flip the array and check to see if it is equal to the original number




#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string>
using namespace std;

int arraySize(int);

void rvereseArray(char arr[], char start, char end)
{
    while (start < end)
    {
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(char arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";

   cout << endl;
  }


int main()
{
  int arrr;
  cin >> arrr;
	char arr[arraySize(arrr)] = arrr;
	rvereseArray(arr, 0, 99);

	printArray(arr, 100);




}


int arraySize(int arr) {

  bool test = true;
  int i;
  for (i = 0; test == true; i++) {
    int temp;
     temp = arr % 10;
    if (temp > 0) { test = true;} else { test = false;}

    arr /= 10;

  }
  return i;

}
