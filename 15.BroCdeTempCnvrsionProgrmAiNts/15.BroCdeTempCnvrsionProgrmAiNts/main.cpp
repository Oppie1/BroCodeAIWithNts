#include<iostream>
using namespace std;


int main() {


	//Start by creating a double variable to hold the temperature value that we'll be converting
	//CODE:
	double temp;

	//Next, create a char variable to store the user's unit selection (Fahrenheit or Celsius)
	//CODE:
	char unit;

	cout << "******Temperature Conversion****** " << endl;

	cout << "F = Fahrenheit\n";
	cout << "C = Celsius\n";

	cout << "What would you like to convert to?\n";

	//REad the user's choice and save it to the unit variable
	//CODE:
	cin >> unit;

	//Check if the user wants Celsius converted to Fahrenheit. If they entered F (uppercase and lowercase),
	// ask for the Celsius temperature, ead it, apply the conversion formula (multiply by 1.8 then add 32),
	// and display the result in Fahrenheit.
	//CODE:
	if (unit == 'F' || unit == 'f') {

		cout << "Enter the temperature in Celsius: \n";

		cin >> temp;

		temp = (1.8 * temp) + 32;

		cout << "Temperature is: " << temp << " F\n";
	}

	//Check if the user wants Fahrenheit converted to Celsius. If they entered C (uppercase or lowercase),
	// ask for the Fahrenheit temperature, read it, apply the conversion formula (subtract 32 then divide by 1.8)
	// and display the result in Celsius.
	//CODE:

	else if (unit == 'C' || unit == 'c') {

		cout << "Enter the temperature in Fahrenheit: \n";

		cin >> temp;

		temp = (temp - 32) / 1.8;

		cout << "Temperature is: " << temp << " C\n";
	}

	//Handle any invalid input by letting the user know they should only enter F or C.
	else {

		cout << "Please enter C or F\n";
	}

	cout << "******Program Ends******" << endl;

}