 #include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	
	cout << "This program asks for an integer and prints out whether its even or odd. It runs that function in a loop and will continue the operation as long as its prompted to continue" << endl;

	int usInt;
	char usResponse = 't';
	char posResponse[] = {'y','n'};
	

	do 
	{

	cout << "Type your integer: ";
		cin >> usInt;
		cout << endl;

		int eoCheck = usInt % 2;



		if(eoCheck == 0){
			cout << "Your number is even" << endl;
			//cout << eoCheck;
		} else if (eoCheck == 1) {
			cout << "Your number is odd" << endl;
			//cout << eoCheck;
		} else if (eoCheck == -1){
			cout << "Your number is odd" << endl;

		} else {
			
			cout << "Your number is not a whole number: " << eoCheck << endl;
		}

			// Check for response
		cout << "Would you like to check another integer; 'y' or 'n' ?";
			cin >> usResponse;

	} while (usResponse != posResponse[1]);
	
	cout << "Goodbye";
	return 0;

	
	
	//i = i;

	/*c

	if (usResponse == posResponse[0]){

		i = 0;

	} else if (usResponse == posResponse[1]){

		i = 999;
	}	*/






	}
	


//}