#include<iostream>
using namespace std;


int main() {

	//&& = evaluates to true only when both conditions are satisfied
	//|| = evaluates to true if at least one condition is satisfied
	//! = inverts (switches) the truth value of a condition


	//Set up two integer variables to store temperature measurements.
	//CODE:
	int temp;
	int temp2;

	//Create a boolean variable called sunny and initialize it to true
	//CODE:
	bool sunny = true;

	cout << "Enter the temperature: ";

	//Store the user's temperature input in the temp variable
	//CODE:
	cin >> temp;

	//Write a conditional statement that prints a positive message if the temperature is between
	// 0 and 30 degrees.
	//CODE:
	if (temp > 0 && temp < 30) {

		cout << "It's a good temperature out." << endl;
	}

	//Add an alternative case that displays a message when the temperature is outside the good reange
	//CODE:
	else {

		cout << "The temperature is not good today." << endl;

	}

	cout << "Enter temperature 2:";

	//Read the second temperature value from the user into temp2
	//CODE:
	cin >> temp2;

	//Build a conditional that determines if temp2 is problematic (either too cold or below a comfortable level)
	// Display an appropriate message based on whether the temperature meets either condition.
	//CODE:
	if (temp2 <= 0 || temp2 <= 30) {

		cout << "The temp is terrible today" << endl;
	}

	else { cout << "The temperature is good today." << endl; }

	//Construct an if-else block using the sunny variable that outputs whether it's sunny or not.
	//CODE:
	if (sunny) {

		cout << "It's a sunny day!" << endl;
	}
	else {

		cout << "It's a cloudy day!" << endl;
	}

	//Write another conditional using the NOT operator (!) to invert the sunny condition with output
	// describing the weather accordingly.
	//CODE:
	if (!sunny) {//Since sunny is true, this condition becomes false, so the else block executes.

		cout << "It's sunny";
	}
	else { cout << "Its cloudy" << endl; }
}