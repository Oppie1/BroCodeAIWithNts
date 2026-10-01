#include<iostream>
using namespace std;

//If statements allow your progra to make decisions: execute a block of code only when a specific condition 
//evaluates as true.

int main() {

	//Create an integer variable named age and declare it without initializing a value yet.
	//CODE:
	int age;

	cout << "Enter your age: ";

	//REad the user's input from the keyboard and store that value in the age variable.
	//CODE:
	cin >> age;

	//Create an if statement that evaluates whether age is greater than 100. If this condition is true, display
	// a message telling the user they cannot access the site due to their age.
	//CODE:
	if (age > 100) {
		cout << "You are too old to enter this site" << endl;
	}

	//Create an else if statement that checks if age is greater than 18. If this condition is true, display
	// a welcome message to the user.
	//CODE:
	else if (age > 18) {
		cout << "Welcome to the site!" << endl;
	}

	//Create an else if statement that checks if age is exactly equal to 18.
	else if (age == 18) {//Note: == to compare values, NOT = which assigns a value to a variable.
		cout << "Welcome to the site your exactly 18!" << endl;
	}

	//Create an else if statement that checks if age is greater than or equal to 18. Display a welcome message
	// explaining that this comparison operator is the correct one to use in this scenario.
	//CODE:
	else if (age >= 18) {
		cout << "Welcome to the site. This combo is what we should use >=" << endl;
	}

	//Create an else if statement that checks if age is less than 0. If true, display a message indicating the
	// user has not yet been born. This condition is checked even if previous conditions are skipped.
	//CODE:
	else if (age < 0) {//Note: once any if/else if condition is true, the remaining conditions are skipped.
		cout << "You havenet been born yet " << endl;
	}

	//Create a final else statement that handles all remaining cases where the age is less than 18.
	//Display a message denying the user access to the site.
	//CODE:
	else {
		cout << "You are not allowed in the site " << endl;
	}


	return 0;
}