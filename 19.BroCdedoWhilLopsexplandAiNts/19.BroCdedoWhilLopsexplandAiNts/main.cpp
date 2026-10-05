#include<iostream>
using namespace std;




int main() {

	//A do-while loop executes its code block first, then checks a condition. If the
	// condition is true it repeats, If fails, it exits the loop.

	//Declare an integer variable to store the user's number input.
	//CODE:
	int number;

	//Use a do-while loop to repeatedly ask the user for a positive number.
	//The loop will continue running as long as the entered number is negative.
	//Once the user enters a positive number, the loop exits and the program continues.
	//CODE:
	do {

		cout << "Enter a positive number: ";

		//Store the user's input in the number variable.
		//CODE:
		cin >> number;

		//Continue looping while the number is less than 0.
		//CODE:
	} while (number < 0);

	//Display the valid number that was entered.
	//CODE:
	cout << "The number: " << number;

	cout << "\n\n-------If not using a do while loop-------\n\n" << endl;

	//Declare an integer variable to store the second number input.

	//CODE:
	int secondNumber;

	//Prompt the user to enter a positive number and store their input.
	//CODE:
	cout << "Enter a positive number: ";

	//Store the user's input in the secondNumber variable.
	//CODE:
	cin >> secondNumber;

	//Use a while loop to validate the input. If the number is negative, keep asking 
	//the user to enter a positive number until they do.
	//CODE:
	while (secondNumber < 0) {
		cout << "Enter a positive number";

		cin >> secondNumber;
	}

	//Display the valid number that was entered
	//CODE:
	cout << "The number is: " << secondNumber;

	return 0;
}

//Key difference: A do-while loop asks for input once before checking the condition,
//while a regular while loop checks th condition first. This makes do-while more
//efficient when you need to get input at least one time.