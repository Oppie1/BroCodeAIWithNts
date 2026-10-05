#include<iostream>
#include<string>
using namespace std;


int main() {

	//Initialize an empty string variable to hold user input
	//CODE:
	string name;

	cout << "Enter your name:\n";

	//Read a full line of text from user input and store it in the name variable using getline()
	//CODE:
	getline(cin, name);

	//Check if the name's length exceeds 12 characters (call legth() on name. If it does, display an error message.
	//CODE:
	if (name.length() > 12) {

		cout << "\nYour name cannot be over 12 characters long ";
	}

	//Otherwise, greet the user by displaying the name they entered.
	//CODE:
	else {

		cout << "Welcome " << name << endl;
	}

	cout << "\n\nEnter your name example number 2 type name\n";

	//Read the user's input and store it in the name variable.
	//CODE:
	getline(cin, name);

	//Determine whether the name variable is empty (no text was entered) (call empty() on name).
	// If empty, inform the user that they didnt provide a name.
	//CODE:
	if (name.empty()) {

		cout << "You didnt enter your name\n";
	}

	//If the user did enter a name, greet them.
	//CODE:
	else {

		cout << "Hello " << name << endl;
	}

	cout << "\n\nEnter your name example number 3 type name\n" << endl;
	
	//Read the user's nameinput and store it in the name variable.
	//CODE:
	getline(cin, name);

	//Call clear() on name. Remove all characters from the name string and display what remains (which is empty).
	// This demonstrates how the clear() function empties a string.
	//CODE:
	name.clear();
	cout << "Hello " << name;

	cout << "\n\nEnter your name example number 4 type name\n";

	//Read the user's input and store it in the name variable.
	//CODE:
	getline(cin, name);

	//Call append() on name. Append the next "@gmail.com" to the end of the existing name string.
	//CODE:
	name.append("@gmail.com");

	//Display the new combined string that now contains both the name and email domain.
	//CODE:
	cout << "Hello your full user name is now: " << name << endl;

	cout << "\n\nEnter your user name example number type name 5\n";

	//Read user input and use the at() function to access and display the character at position 1 
	// (the second character, since indexing starts at 0).
	//CODE:
	getline(cin, name);

	cout << name.at(1);

	cout << "\n\nEnter your name example number 6 type name\n";

	//Read the user's name and store it in the name variable.
	//CODE:
	getline(cin, name);

	//Insert the "@" symbol at the begining of the name string (position 0) and display the result.
	//CODE:
	name.insert(0, "@");
	cout << name;

	cout << "\n\nEnter your name example number 7 type full name with space.\n";

	//Read the user's full name (including spaces) and store it.
	//CODE:
	getline(cin, name);

	//Search for the first space character within the name and display its position.
	//CODE:
	cout << name.find(' ');

	cout << "\n\nEnter your name example number 8 enter name:\n";

	//Read the user's name and store it in the name variable
	//CODE:
	getline(cin, name);

	//Call erase(,) on name. Remove first 3 characters from the name string and display what remains.
	//CODE:
	name.erase(0, 3);
	cout << name;


}