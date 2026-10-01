#include <iostream>
#include <string>//The string library is required for reading multiple words from user input.
using namespace std;


//Use cout with the insertion operator (<<) to disply text to the user.
//Use cin with the extraction operator (>>) to receive input from the user.

int main() {

	//Create an empty string variable to hold a complete sentence or phrase from user.
	//CODE:
	string name;

	//Create empty string var to hold complete sentence (full name) from user.
	//CODE:
	string name2;

	//Create an integer variable to store a numeric age value
	//CODE:
	int age;

	cout << "What's your name " << endl;

	//Take the user's first name and store it in the program
	//CODE:
	cin >> name;//-> Automatically includes an \n new line character

	//Display the entered name back to user
	//CODE:
	cout << "Hello my name is " << name << endl;

	cout << "\nWhat is your full name?" << endl;

	//The getline function reads the entire input including spaces between words.
	//The "ws" manipulator skips any leading whitespace left over from the previous
	//cin operation, ensuring clean input capture.Get the user's complete full 
	//name including spaces.
	getline(cin >> ws, name2);

	//Display the users full name that was entered.
	//CODE:
	cout << "\nMy full name is " << name2 << endl;

	cout << "\nHow old are you?" << endl;

	//Read the user's age and save it to the program.
	//CODE:
	cin >> age;

	//Displays the user's age to confirm it was received correctly.
	//CODE:
	cout << "User is " << age << " Years old." << endl;

	return 0;

}

//Additional note - where does this fit in?:
//cin.ign.ore();
//This function discards input left in the buffer, which is useful when mixing cin and
//getline operations to prevent getline from accidentally reading leftover characters from
//a previous cin statement