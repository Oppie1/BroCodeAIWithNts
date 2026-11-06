#include<iostream>
using namespace std;


//The for-each loop (also called range-based loop) simplifies iterating through arrays and other
//collections by automatically accessing each element without managing an index.

int main()

{

	cout << "Part 1: Iterating through a string array with for-each loops" << '\n' << endl;

	//Declare a string array with 4 student names.
	//CODE:
	string students[] = { "Claudia", "Nakai", "Adam", "Jaiden" };

	//Loop through each element in the students array, storing the current name in the variable 'student'/
	//Print each name on a separate line.
	//CODE:
	for (string student : students) {

		cout << student << endl;
	}

	cout << "\n**************************************************************************\n";
	cout << "Part 2: Using for-each loops with integer arrays" << endl;

	//Create an int array with 4 grade values.
	//CODE:
	int grades[] = { 65, 72,81,93 };

	//Loop through each grade and display all grades on one line, separated by spaces.
	//CODE:
	for (int grade : grades) {

		cout << grade << " ";
	}

	cout << endl;
}