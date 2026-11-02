#include<iostream>
using namespace std;



//A function is a reusable block of code that performs a specific task.
// First, declare a func prototype: void happyBirthday that accepts a string(name)
// and int (age).
//CODE:
void happyBirthday(string name, int age);

int main() {

	//Create a string var named name and set it to "Claudia"
	//CODE:
	string name = "Claudia";

	//Create an in var named age and set it to 45
	//CODE:
	int age = 45;

	//Call the happyBirthday(), passing in name and age arguments.
	//CODE:
	happyBirthday(name, age);

}

//Implement the happyBirthday function definition.
//CODE:
void happyBirthday(string name, int age) {
	//Print "Happy birthday [name]" four times using a loop or separate cout statements.
	//CODE:
	for (int i = 0; i < 4; i++) {

		cout << "Happy birthday \n";

		//Print a complete sentence displaying the person's age: You are [age] years old :)
		
	}

	cout << "You are " << age << " years old :)" << endl;
}
