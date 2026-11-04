#include<iostream>
using namespace std;



//Array: A data structure that stores multiple values of the same type. Access values
//using an index number (starting from 0).

int main() {

	//Initialize a single string variable and show to screen (Use cars for examples).
	//CODE:
	string car = "Corolla";
	cout << car << endl;

	//Create a string array with three car makes and display them.
	//CODE:
	string cars[] = { "Ford", "GM", "Toyota" };

	cout << cars[0] << endl;
	cout << cars[1] << endl;
	cout << cars[2] << endl;

	//Create another string array with size 3 and populate it with car models.
	//Then display each element
	//CODE:
	string cars2[3];

	cars2[0] = "Corola";
	cars2[1] = "Camary";
	cars2[2] = "Rav4";

	cout << cars[0] << endl;
	cout << cars[1] << '\n';
	cout << cars[2] << endl;

	//Create a double array with four prices (two decimal place)
	//Display all price elements using their index.
	//CODE:
	double prices[] = { 22.20, 5.67, 4.44, 37.37 };

	cout << prices[0] << " " << prices[1] << " " << prices[2] << " " << prices[3] << endl;

}