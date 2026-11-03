#include<iostream>
using namespace std;



//Functions allow us to perform calculations or operations and return the results back to where we called them.
//This is useful because we can reuse the same logic multiple times without rewriting it.

//Create a function prototype for a function named square that takes a double parameter called length.
//and returns a double value representing the area of a square.
//CODE:
double square(double length);

//Create a function prototype for a function named cube that takes a double parameter called length and
//returns a double value representing the volume of a cube.
//CODE:
double cube(double length);

//Create a function prototype for a function named concatString that takes two string parameters
//(string1 and string2) and returns a single string that combines them together.
//CODE:
string concatString(string string1, string string2);


int main() {

//The return keyword sends a value back from a function to the location where that function was called.
//This allows us to capture the result and use it in our program.

//Create a double var named length and give it an initial value. You might use a value like 5.0 or 10.0.
//CODE:
	double length = 10.0;

//Now create two double vars: one named area and one named volume. Initialize area by calling the square func
//with length as the arg. Initialize volume by calling the cube func and length as arg.
//This way, area will store the result of length squared, and volume will store the result of length cubed.
//CODE:
	double area = square(length);
	double volume = cube(length);

//Create two string variables: one named firstName and one named lastName. Initialize first name to
//Adam and last name to Tindall.
//CODE:
	string firstName = "Adam";
	string lastName = "Tindall";

//Create a string var named fullName and initialize it by calling the concatString function.
//Pass firstName and lastName as args so they get combined into one complete name string.
//CODE:
	string fullName = concatString(firstName, lastName);

//Use cout to print a greeting that says "Hello " followed by the fullName var.
//CODE:
	cout << "Hello " << fullName << endl;

//Print a complete sentence stating "The area of the square is: " followed by the area value and the unit cm^2.
//CODE:
	cout << "The area of the square is: " << area << "cm^2" << endl;

//Do the same thing as above, but this time print the volume value instead of area.
//Use the message "The volume of the cube is: " and the unit cm^3 to show it's a cubic measurement.
//CODE:
	cout << "The volume of a cube is: " << volume << "cm^3" << endl;

}

//Now define (write the actual code for) the square function. It should take the length parameter
//and return the result of multiplying length by itself.
//CODE:
double square(double length) {

	return length * length;
}

//Now define the cube function. It should take the length parameter and return the result of multiplying 
//length by itself 3 times.
//CODE:
double cube(double length) {

	return length * length * length;

}

//Now define the concatString function.
//It should take two string parameters and return them combined together with a space between them.
//CODE:
string concatString(string string1, string string2) {

	return string1 + " " + string2;
}