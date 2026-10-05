#include<iostream>
using namespace std;

int main() {


	//Declare 4 uninitialized variables. A char for the operator and 3 doubles for two numbers
	//and the result.
	char op;
	double num1;
	double num2;
	double result;

	cout << "***********CALCULATOR***********\n";

	cout << "Enter either (+,-,*,/): ";

	//Store user input into the char op variable.
	//CODE:
	cin >> op;

	cout << "Enter #1: ";

	//Input first number and store in the num1 variable
	//CODE:
	cin >> num1;

	cout << "Enter #2: ";

	//Input second number and store into the num2 variable.
	//CODE:
	cin >> num2;

	//Route Based on the operator
	//Use a conditional branching structure that examines the operator variable. Based on which
	//operator was selected your program jumps to the corresponding section and performs that
	//specific calculation (use switch statement on op)
	//CODE:
	switch (op) {

		//Handle Each Operation using cases (' ') and +,-,/,* operator, write a section that performs
		//the calculation/expression and shows the result and prints it to the scree. Don't forget to
		//include a statement that prevents the program flow from continuing to the next
		//section unintentionally.
		// 
		//Handle addition.
		//CODE:
	case '+':
		result = num1 + num2;
		cout << result << endl;
		break;

		//Handle subtraction
		//CODE:
	case '-':
		result = num1 - num2;
		cout << "result:" << result << endl;
		break;

		//Handle multiplication
	case '*':
		result = num1 * num2;
		cout << "result:" << result << endl;
		break;

		//Handle division
		//CODE:
	case '/': result = num1 / num2;
		cout << "result:" << result << endl;
		break;

		//Catch invalid input
		//Include a catch-all section that activates if the user enters something other than the four
		// supported operators.
		//CODE:
	default:
		cout << "Please enter a standard (+, -,*,/ operator \n";
	}

	cout << "***********************************";

}