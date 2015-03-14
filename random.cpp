#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(void){

	srand( time( NULL) ); // seed random number from time
	int random_number = 1 + (rand() % 99999999); // random number between 1 and 100
	int A = 0;	//declare variable to store guess of user and set to 0
	int S = 0;	//declare variable as counter for number of guesses
	cout << "Pick a # 1-99999999\n";
	
	for(;;)
	{
	S += 1;	// increment guess counter

	cin >> A;	// read input from user
		//
		
	if(A == random_number) {cout << "Win\n"; break;}    	// compare input from user to random number
	if(A < random_number)	{cout << "Too Low\n";}  // print out winner, too high or too low message
	if(A > random_number)	{cout << "Too high\n";}
	//

	}
	
	cout << "You guessed " << S <<" times\n";

	// print message with number of guesses
	//
	
	// cout << "TYPE A #!!!\n";
	
	
	// int i = 0;
	
	
	// cin >> i;
	
	
	// if ( i > 50 )
	// {
	// 	cout << "Hello world\n";
		
	// }else
	// {
	// 	cout << "Goodnight world\n";
	// }
	
	
	
	return 0;
}
