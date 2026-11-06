#include <iostream>
using namespace std;



int main() {

	cout << "Part one: Print grades A-F to the screen with each character on its own line\n\n";
	
	//Create a char array containing grades A-F
	//CODE:
	char grades[] = { 'A', 'B', 'C', 'D','F' };

	//Use a for loop to iterate through all grades using sizeof() to calculate array length
	//(divide total array size by single element size). Display grades to screen.
	//CODE:
	for (int i = 0; i < sizeof(grades) / sizeof(char); i++) {

		cout << grades[i] << endl;

	}
	cout << "\n**************************************************\n" << endl;

	//Create a string array with 4 student names. Print all names on one line with space in between each.
	//CODE:
	string students[] = { "Claudia", "Nakai", "Jaiden", "Adam" };

	cout << "Part Two - Print names to screen using index locations and on each line\n\n";

	cout << students[0] << endl;
	cout << students[1] << endl;;
	cout << students[2] << endl;;
	cout << students[3] << endl;;

	cout << "\n***************************************************************\n";
	cout << "Part three - Print names to screen using a for loop\n";
	
	for (int i = 0;  i < sizeof(students)/sizeof(students[0]); i++) {

		cout << students[i] << endl;
	}

	cout << endl;

}