#include <iostream>
#include <string>//Needed to use getline() function
using namespace std;


int main() {

	//Create a string array to store 5 food items.
	//CODE:
	string foods[5];

	//Calculate the number of elements in the array using sizeof()
	//CODE:
	int size = sizeof(foods) / sizeof(foods[0]);

	//Declare a temporary string var to store user input.
	//CODE:
	string temp;

	//Loop through the array, prompting the user to enter foods or 'q' to quit. Display
	//the current entry number (i+1) to the user.
	//CODE:
	for (int i = 0; i < size; i++) {

		cout << "Enter a food you like or 'q' to quit" << i + 1 << ":" << endl;

		//REad the user's input (including spaces) into the temp var
		//CODE:
		getline(cin, temp);

		//Check if the user entered 'q' and exit the loop if so.
		if (temp == "q") {

			break;

		}

		//Otherwise, store the user's input in the current array element.
		//CODE:
		else {
			foods[i] = temp;
		}
	}
	cout << "\nYou like the following foods:\n";

	//Loop through and display all the foods the user entered.
	//Stop when you reach an empty element or the end of the array.
	//CODE:
	for (int i = 0; !foods[i].empty() && i < 5; i++) {

		cout << i + 1 << ": " << foods[i] << '\n';
	}
}