#include<iostream>
using namespace std;

//

int main() {

	//A switch statement lets you check a value against multiple options without writing lots of if-else statements.
	// It takes a value and compares it to different cases to find a match.
	//CODE:
	int month;

	cout << "Enter the month (1-12): ";

	//Get the user's input and save it in the month variable.
	//CODE:
	cin >> month;

	//Check the month value against cases 1 through 12, and display the matching month name. Each case needs a
	//break statement to stop and exit the switch instead of running the next case.
	//Use a switch statement with the parameter of month with cases, outputs and break; accordingly.
	//CODE:
	switch (month) {
	case 1:
		cout << "It is January";
		break;
	case 2:
		cout << "It is February";
		break;
	case 3:
		cout << "It is March";
		break;
	case 4:
		cout << "It is April";
		break;
	case 5:
		cout << "It is May";
		break;
	case 6:
		cout << "It is June";
		break;
	case 7:
		cout << "It is July";
		break;
	case 8:
		cout << "It is August";
		break;
	case 9:
		cout << "It is September";
		break;
	case 10:
		cout << "It is October ";
		break;
	case 11:
		cout << "It is November ";
		break;
	case 12:
		cout << "It is December";
		break;

		//If the user enters a number that doesnt match any case, the default option runs. This tells the user
		// to pick a valid month number between 1 and 12.
		//CODE:
	default:
		cout << "Please select number 1-12 " << endl;
	}
}