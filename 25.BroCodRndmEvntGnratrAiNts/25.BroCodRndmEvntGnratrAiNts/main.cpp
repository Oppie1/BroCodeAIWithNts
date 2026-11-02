#include<iostream>
#include<ctime>
using namespace std;



int main() {

	//Seed the random number generator with the current time to ensure different
	// results each time the program runs.
	//CODE:
	srand(time(0));

	//Generate a random number between 1 and 5 using modulus (%) The expression
	// (rand(rand) %5 + 1) works by: - rand() % 5 gives us a remainder 0-4
	// -Adding 1 shifts the range to 1-5. Assign an int var that stored random number.
	//CODE:
	int randNum = rand() % 5 + 1;

	//Use a switch statement to handle each possible random outcome.
	//CODE:
	switch (randNum) {

		//Create 5 cases, each representing a different prize. Remember to use
		// break after each case to prevent the code from continuing to the next case.
		//CODE:
	case 1: cout << "You won a sticker\n";
		break;
	case 2: cout << "You won a trophy\n";
		break;
	case 3: cout << "You won a medal\n";
		break;
	case 4: cout << "You won money\n";
		break;
	case 5: cout << "You lost and still get a prize\n";
		break;

	}



}