#include <iostream>
#include<cmath>
using namespace std;


int main() {

	//Create three variables of type double to store decimal values for sides.
	//CODE:
	double a;
	double b;
	double c;

	cout << "Enter side A ";

	//Accept a numeric input from the user and store it in variable a.
	//CODE:
	cin >> a;

	cout << "\nEnter side B ";

	//Receive user input and save it in variable b.
	//CODE:
	cin >> b;

	//Use the pow() function to raise a to the third power and store the result back in a.
	//CODE:
	a = pow(a, 3);

	//Display the updated value of a to the user.
	//CODE:
	cout << "\n" << a << "\n" << endl;

	//Apply pow() function to raise b to the third power and update variable b with this result
	//CODE:
	b = pow(b, 3);

	//Print the new value of b to the console.
	//CODE:
	cout << "\n" << b << "\n" << endl;

	//Store in c the square root of the sum of a cubed and b cubed using nested functions.
	//CODE:
	c = sqrt(pow(a, 3) + pow(b, 3));

	//Print the calculated value of c to the screen.
	//CODE:

	cout << "side C " << c << endl;

	//Recalculate c as the square root of the simple sum of a and b.
	//CODE:

	c = sqrt(a + b);

	//Output the new value of c.
	//CODE:
	cout << c;
}