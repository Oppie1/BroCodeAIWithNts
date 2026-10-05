#include<iostream>
#include<string>
using namespace std;



int main() {

	//Create a string variable named name (don't initialize it yet)
	//CODE:
	string name;

	//Write a while loop that repeats as long as the name variable is empty.
	// Inside the loop, prompt the suer to enter their name using cout, then read their
	// input with getline(,) and store it in the name variabgle. Once the user enteres a name
	// the loop will exit because name is no longer empty.
	//CODE:
	while (name.empty()) {//The loop continues while name contains nothing.

		cout << "Enter you name: ";

		getline(cin, name);//Read the user's input into name. If it's still empty, loop again.
		//Once a name is entered, name is no longer empty, so the loop ends.

	}

	//Display "Hello " followed by the user's name to the screen.
	//CODE:
	cout << "Hello " << name;

}

//Example of an infinite loop using a while statement.
//While (1==1){

//cout <<"Help! I am stuck in an infinite loop" << endl;
//}