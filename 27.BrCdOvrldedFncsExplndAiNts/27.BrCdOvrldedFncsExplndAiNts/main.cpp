#include<iostream>
using namespace std;


//Function overloading Tutorial
//This program demonstrates function overloading - creating multiple funcs with the
//same name but different parameter lists. The compiler automatically chooses which 
//version to call based on the arguments you provide.

//Function prototypes
//Declare three versions of bakePizza() before main. Use void as funcs will return nothing to main.

//Plain pizza with no toppings takes no parameters.
//CODE:
void bakePizza();

//Pizza with one topping takes string topping1 as parameter.
//CODE:
void bakePizza(string topping1);

//Pizza with two toppings takes two parameters.
//CODE:
void bakePizza(string topping1, string topping2);

int main() {

	//Call the bake pizza function with no arguments.
	//CODE:
	bakePizza();

	//Call the bake pizza function with one topping arg.
	//CODE:
	bakePizza("Pepperoni");
	//Call the bake pizza func with two topping args.
	//CODE:
	bakePizza("Olive", "Mushroom");


}

//Define plain pizza function and print its a plain pizza out to screen.
//CODE:
void bakePizza() {

	cout << "Here is your plain pizza" << endl;
}


//Define pizza with one topping and print out to screen the one topping pizza.
//CODE:
void bakePizza(string topping1) {

	cout << "Here is your " << topping1 << " pizza" << endl;
}

//Define pizza with two toppings and print out to screen the two topping pizza.
//CODE:
void bakePizza(string topping1, string topping2) {

	cout << "Here is your " << topping1 << " " << topping2 << " pizza" << endl;
}