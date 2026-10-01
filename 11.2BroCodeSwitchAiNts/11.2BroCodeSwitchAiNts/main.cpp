#include<iostream>
using namespace std;



int main()
{

	//Create a char variable named grade without initial value to store what the user types.
	//CODE:
	char grade;

	cout << "What is your grade?" << endl;
	
	//Read the user's input and save it into the grade variable.
	//CODE:
	cin >> grade;

	//Set up a switch block that examines the grade variable. Each case should check for letter grades
	//(A through F) using single quotes, display a message about their performance, and include a break
	//to stope execution from continuing to the next case.
	//CODE:
	switch (grade) {
	case 'A':
		cout << "You did great!" << endl;
		break;
	case 'B':
		cout << "You did good." << endl;
		break;
	case 'C':
		cout << "You did ok." << endl;
		break;
	case 'D':
		cout << "You did not do go." << endl;
		break;
	case 'F':
		cout << "You failed" << endl;
		break;
		
		//Add a default case that triggers when none of the A-F cases match, prompting the user to enter a 
		// valid letter grade.
		//CODE:
	default:
		cout << "Please enter a letter grade" << endl;

	}
}