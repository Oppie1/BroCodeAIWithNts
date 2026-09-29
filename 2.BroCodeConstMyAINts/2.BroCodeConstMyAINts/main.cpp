#include<iostream>
using namespace std;


//The 'const' keyword makes a variable read-only, preventing its value from being modified after
//declaration. Use 'const' whenever a variable's value is know upfront and should never be changed
//throughout the program.

int main() {

	//Convention: const variable names are written in ALL_CAPS with underscores separating words
	//(also know as SCREAMING_SNAKE_CASE).

	//Declare four constants below representing well-known fixed values PI and LIGHT_SPEED and 
	//real-world constants, while WIDTH and HEIGHT represent a standard 1080p screen resolution.
	//CODE:
	const double PI = 3.14259;
	const int LIGHT_SPEED = 299792458;
	const int WIDTH = 1920;
	const int HEIGHT = 1080;

	//'radius' is set to a fixed value..
	//Declare 2 double variables for radius and circumference. Assign radius to a value
	//and circumference to an equation.
	//CODE:
	double radius = 10;
	double circumference = 2 * PI * radius;

	//Print the calculated circumference to the console.
	//CODE:
	cout << circumference << "cm\n";

	//Print the speed of light (in m/s) to the console.
	//CODE:
	cout << "Speed of light is: " << LIGHT_SPEED << endl;

}