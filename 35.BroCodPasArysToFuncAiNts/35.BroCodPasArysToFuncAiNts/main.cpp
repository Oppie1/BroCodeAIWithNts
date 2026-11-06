#include<iostream>
using namespace std;



//Function prototype: accepts an array of doubles for prices and an int for array size.
//CODE:
double getTotal(double prices[], int size);

int main() {

	//Initialize a double array with 4 price values.
	//CODE:
	double prices[] = {4.33,3.45,11.36,22.99};

	//Calculate array size: divide total array size by size of ont element.
	//CODE:
	int size = sizeof(prices) / sizeof(prices[0]);

	//Call getTotal() and store the result and assign it to new var totalPrice.
	//CODE:
	double totalPrice = getTotal(prices, size);

	//Output the total price
	//CODE:

	cout << "$" << totalPrice << endl;

}

//Func definition: sum all prices in the array.
//CODE:
double getTotal(double prices[], int size){

	//Initialize a local variable to accumulate the total price
	//CODE:
	double totalPrice = 0;
	 
	//Loop through each element in the array and add to totalPrice
	//The size parameter tells us how many elements to process.
	//CODE:
	for (int i = 0; i < size; i++) {

		totalPrice += prices[i];
	}

	//Return the calculated total total to main.
	//CODE:
	return totalPrice;

}