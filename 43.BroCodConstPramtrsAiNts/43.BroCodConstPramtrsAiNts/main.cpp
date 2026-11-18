#include <iostream>
using namespace std;


//const parameter = a parameter that cannot be modified inside the function.
//Benefits: prevents accidental changes, improves code safety, and clarifies intent
///Particularly useful with references and pointers.

//Declare a void function prototype named printInfo() that accepts:
//- a const string reference for a name
// - a const int reference for a name
// - a non-const int reference for another var
// CODE:

void printInfo(const string& name, const int& age, int& poop);


int main() {

	//Declare a string var initialized to "Bro"
	//CODE:
	string name = "Bro";

	//Declare an int var initialized to 21
	//CODE:
	int age = 21;

	//Declare an int var named age2 initialized to 2
	int age2 = 2;

	printInfo(name, age, age2);

}

//Define the printInfo():
//Attempt to create local var with the same names as the const parameters
//(this demonstrates whey they're commented out - const parameters prevent this)
//Finally, display the name and age values
//CODE:
void printInfo(const string& name, const int& age, int& age2) {

	//These are commented out because const parameters cannot be reassigned.
	//string name = " ";
	//int age = 0;

	//int age2 CAN be modified since it is not a constant var.
	//CODE:
	age2 = 77;

	cout << name << '\n';
	cout << age << '\n';
	cout << age2 << '\n';
}
