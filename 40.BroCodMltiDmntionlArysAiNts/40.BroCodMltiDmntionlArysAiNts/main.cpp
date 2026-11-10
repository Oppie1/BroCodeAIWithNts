#include<iostream>
#include<string>
using namespace std;


//Multidimensional arrays are arrays of arrays. A 2D array represents a grid or matrix. Here we'll create
//and access a car inventory.

int main(){

	//Create a 2D string array with car models. Use two bracket sets: first for rows (manufacturers), second
	//for columns (models per manufacturer). This stores 3 rows of 3 car models.
	//CODE:
	string cars[][3] = { {"Mustang", "Escape", "F-150"},
		{"Corvette", "Equinox","Silverado"},
		{"Challenger", "Durango","Ram 1500"} };

	//Calculate the number of rows by dividing the toral array size by the size of one row element.
	//CODE:
	int rows = sizeof(cars) / sizeof(cars[0]);

	//Calculate the number of columns by dividing one row's size by a single element size.
	//CODE:
	int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

	cout << '\n' << "--- Car Models of Car Manufacturer ---\n" << endl;
	//Use nested loops to access all elements. The outer loop iterates through rows, the inner loop through
	//columns within each row.
	//CODE:
	
	//Use nested loops to access all elements. The outer loop iterates through rows, the inner loop through
	//columns within each row.
	//CODE:
	for (int i = 0; i < rows; i++) {

		//Inner loop iterates through each column.
		//CODE:
		for (int j = 0; j < columns; j++) {

			//Access each element using [row][column] indexing and print it.
			//CODE:
			cout << cars[i][j] << "  ";
		}
		
		//After completing each row, print a newline to move to the next row.
		//CODE:
		cout << '\n' << "--- Car Models of Car Manufacturer ---\n" << endl;
	}


cout << "\n---Second Example---\n" << endl;

//Print out all the array elements (cars). Printing out each car manufacturer on one line. So will have
//3 lines total.
//CODE:
cout << cars[0][0] << " ";
cout << cars[0][1] << " ";
cout << cars[0][2] << "\n";
cout << cars[1][0] << " ";
cout << cars[1][1] << " ";
cout << cars[1][2] << "\n";
cout << cars[2][0] << " ";
cout << cars[2][1] << " ";
cout << cars[2][2] << " ";

cout << '\n' << "----------------------------------------------" << endl;

}
