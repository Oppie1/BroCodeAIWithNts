#include<iostream>
using namespace std;



int main() {

	//The ternary operator (? :) is a concise way to make a decision in your program.
	//It follows the patter: condition ? value_if_true : value_if_false.

	//Create an integer variable to store a test grade (pick any number between 1- 100)
	//CODE:
	int grade = 51;

	//Use the ternary operator to check if the grade is at least 60, then display whether the student 
	// passed or failed the test.
	//CODE:
	grade >= 60 ? cout << "You pass! " : cout << "You fail!" << endl;

	//Create an integer variable and assign it an number you'd like.
	//CODE:
	int number = 8;

	//Use the ternary operator to determine if your number is even or odd. Hint: Use the modulo operator (%)
	//which gives you the remainder after division. In C++ 0 is treated as false, and any non-zero is treated as true
	// So for even numbers: number %2 equals (false-> displays "Even" And for odd numbers: number % 2 equals
	// 1 or higher (true) -> displays "ODD"
	//CODE:
	number % 2 ? cout << "ODD" : cout << "EVEN" << endl;

	//Create a boolean variable and set it to either true of false (try false first). For example, you could
	//represent whether someone is hungry or not.
	//CODE:
	bool hungry = false;

	//Use the ternary operator to output a message based on the boolean's state you might describe someone's
	// condition (like: hungry, available, has class etc.)
	//CODE:
	hungry ? cout << "User is hungry." : cout << "User is not hungry" << endl;

	//Try one more example using a single cout statement with the ternary operator. Hint: Wrap your ternary
	// expression in parentheses to make it work smoothly.
	//CODE:
	cout << (hungry ? "You're hungry" : "You're full");


}