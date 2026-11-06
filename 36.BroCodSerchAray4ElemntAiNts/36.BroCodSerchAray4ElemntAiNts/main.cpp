#include<iostream>
#include <string>
using namespace std;

// Function declarations for searching an array of integers and strings
//CODE:
int searchArray(int array[], int size, int element);

//CODE:
int searchArray(string foods[], int size, string myFood);

int main() {

	// Set up an integer array with values 1-9
	//CODE:
	int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// Calculate the array size by dividing the total size by the size of one element
	//CODE:
	int size = sizeof(numbers) / sizeof(numbers[0]);

	// Variables to store the search result and user input
	//CODE:
	int index;
	int myNum;

	cout << "Enter element to search for: " << '\n';

	// Get the number to search for from the user
	//CODE:
	cin >> myNum;
	cin.ignore(); // Clears the buffer for future input operations

	// Call searchArray to find the position of myNum in the numbers array
	//CODE:
	index = searchArray(numbers, size, myNum);

	// Display whether the number was found and at which position
	//CODE:
	if (index != -1) {

		cout << myNum << " is at index " << index << endl;
	}
	else { cout << myNum << " is not in the array" << endl; }

	cout << "\n\n****************************************************************\n";
	cout << "Next Example: " << endl;

	// Create an array of foods to search through
	//CODE:
	string foods[] = { "pizza", "hamburger", "taco" };


	//Declare a integer variable named size2 and initialize it to the expression of sizeof() 
	//with foods as its argument divided by sizeof() one foods element.
	//CODE:
	int size2 = sizeof(foods) / sizeof(foods[0]);

	//Declare two variable one being an int for index2 and the other a string for myFood.
	int index2;
	string myFood;

	cout << "\nEnter food to search for: " << '\n';

	//Use a getline(,) to bring in the user food selection to see if it is in array.
	//CODE:
	getline(cin, myFood);
		//Assign the storage variable index2 to the searchArray() with given arguments.
		//CODE:
	index2 = searchArray(foods, size, myFood);

	//Again use if statement to text if user input (index2) does not equal -1. If it does the if 
	//statement executes and use myFood variable "is at index" index2
	//CODE:
	if (index2 != -1) {

		cout << myFood << " is at index " << index2 << endl;
	}
	//If -1 was returned (return -1) then the if statement fails and is skipped. Use an else
	//statement to print myFood "is not in the array" to the screen.
	else {

		cout << myFood << " was not in the array " << endl;
	}
}

//Define the function definition search array for locating the right element in the array. This
//is the definition for the number search array.
//CODE:
int searchArray(int array[], int size, int element) {

	for (int i = 0; i < size; i++) {

		if (array[i] == element) {
			return i;
		}
	}

	return -1;
}

	//Within the codeblock of the function definition use a for loop to scroll through each
	//iteration of the numbers array. First initialize the loop counter i to 0, then compare i
	//to the size of the array, increment by 1.
	//CODE:

		//Within the for loop use an if statement to see if the given array element using array[i]
		//is equal to the element at that given iteration. It will keep looping through all the 
		//elements of the numbers array 1-9. If the given element is found then it will be returned
		//to the caller. The if statement executes then return i within the block.
		//CODE:

	//Just outside the for loop back in the function definition codeblock we want to return -1. This 
	//will be the sentinel value that will be returned to the function call in main and used in
	//the if statement there to display whether a number was found or not.
	//CODE:

	//Define the func definition search array for locating the right food (myFood) in the foods array. 
// This is the definition for foods search array.
//CODE:
int searchArray(string foods[], int size, string myFood) {

	for (int i = 0; i < size; i++) {

		if (foods[i] == myFood) {

			return i;
		}

	}

	return -1;
}

	//Within the codeblock of the function definition use a for loop to scroll though each iteration 
	// of the foods array. First initialize the loop counter to 0, then compare i to the size
	//of the array, increment by 1.
	//
		//Within the for loop use an if statement to see if the given array element using foods[i]
		//is equal to the element(myFood) at that given iteration. It will keep looping through all the
		//elements of the foods array (three foods). If a given myFood is found then it will be returned to
		//the function call in main. The if statement executes then return i within that if block.

	//Just outside the for loop back in the function definition codeblock we want to return -1. This will be
	//the sentinel value that will be returned to the function call in main and used in the if statement
	//there to display whether a food was found or not.
