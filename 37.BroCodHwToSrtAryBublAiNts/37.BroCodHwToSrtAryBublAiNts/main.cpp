#include <iostream>
using namespace std;



//Declare a sort() function of void data type. With parameters of int array[] to hold the 
//actual array element values and int size vars to hold the total size of the array.
void sort(int array[], int size);

int main() {

	//Declare an int array[] that contains 4 elements initialized to 10, 1 ,4,9
	//CODE:
	int array[] = { 10,1,9,4 };

	//Declare and initialize the int size var to the sizeof() with the arg of array. Then
	//divide the size of the full array by just one element of the array using one element of 
	//that array using sizeof() with one element of the array[0] as the parameter.
	//CODE:
	int size = sizeof(array) / sizeof(array[0]);

	cout << "\nUnsorted Array Using traditional for loop\n" << endl;

	//Use a for loop with int i initialized to 0; i less than the size  of the array increment i by 1.
	//As the loop iterates, in the codeblock output each element of the array using array[i] syntax on 
	//one line with a space between each element.
	for (int i = 0; i < size; i++) {

		cout << array[i] << " ";
	}

	cout << endl;

	cout << "\nUnsorted Array Using range based loop\n" << endl;

	//Now use a range-based for-each loop to output all the elements to the sceen in the same way
	//as just done above. See bottom for through explanation of the for-each-range-based loop concept.
	//CODE:
	for (int element : array) {

		cout << element << " ";
	}

	cout << endl;

	//Call the sort function with array and size as its arguments.
	//CODE:
	sort(array, size);

	cout << "\nSorted Array Using traditional for loop\n" << endl;

	//Use a for loop with int i initialized to 0, i less than size, i++
	//Again, during each iteration print the current element to screen.
	//CODE:
	for (int i = 0; i < size; i++) {

		cout << array[i] << " ";
	}

	cout << endl;

	cout << "\nSorted Array Using range based loop\n" << endl;

	//Use a range-based for-each loop to print elements to the screen.
	//CODE:
	for (int element : array) {

		cout << element << " ";
	}

	cout << endl;
}

//Define the void sort function.
//CODE:
void sort(int array[], int size) {

	//Declare the void sort function.
	//CODE:
	int temp;

	//Use a for loop initializing i to 0, i<size of the array; then increment i by one. Here the
	//functional purpose is to go through each of the 4 elements in the array to insure that each has 
	//their chance to be sorted.
	//1. = 0, 0<4 -> True, Go to next step/nested for loop. #1.
	//2. i = 1, 1<4 -> True, Go to next step/nested for loop. #5
	//3. int i = 2, 2<4 true
	//4. int i =3 -> 3<4? True
	//5. int i = 4 -> 4<4? False, program ENNNNNNDSSSSSSSSSSSSSSSS!

	for (int i = 0; i < size; i++) {

		//Create a nested for loop to take care of the current element testing it against the
		//element to the right in the unsorted sequence.  Here we move 10 all the way right.
		//1. j = 0, 0<4 - 0 - 1 -> 0<3? True
		//Now j = 1, 1 < 4 - 0 -1 1<3 true
		//Now j = 2, 2< 4 true
		// j = 3 -> , 3 < 4 - 0 - 1 -> 3<3? False
		

		//Here we end up swapping the 4 and the 9 (1,4,9,10)
		//j = 0 0<4-1-1 4 -2 = 2  true
		//j = 1 1<4-1-1 -> 1<2? True.
		//j = 2 2<2? False

		//j = 0, 0<4-2-1 -> 0<1? True
		//j = 1, 1<1? False -> Go to outer loop iterate i -> i = 3

		//j = 0, 0<4-3-1-> 0<0 ? False -> go to outer loop iterate i by 1 i = 4
		for (int j = 0; j < size - i - 1; j++) {

		//	10, 1, 9, 4

		//1. array[0(10)] > array[0+1 = 0(1)? True.
		//2. array[1(10)> array[1+1 = 2] = 10<4? True.
		//3. array[j=2(10)>array[1+2 = j= 3(9)] = 10>9? True.

		//1. array[0,1]>array[0+1] = 1>4? False, move back to nested loop.
		//2. array[1,9]?array[1+1 = index 2 -> 9 -> 9>4? True

		//3. array[0(1)]>array[0+1(4)]? False, back to nested loop j = 1.
		
			if (array[j] > array[j + 1]) {

		//Assign the temp variable to array[j] which is 10.
		//assign temp variable to array[0] so 10
		//Assign 10 to temp
		//Assign 10 to temp where array[1] ->10 -> 10 now in temp
//Assign 10 to temp where array[2] -> 10 is now in temp.
//Assign temp to index 1 which is 9
				temp = array[j];
		
		//Assign the array[j] to the next slot/index location (array[j+1), So 1 moves one spot to right.
		//Assign array[j] to 4
		//Assign array[j] to 4
		//Now Assign array[j] to array[j+1[4]) Effectively moving 4 to the left by one so (1,4,-,-)
//Now assign array[j] which is index location 2 to what is in index location 3 so 9 -> (1,4,9,-)
	//Assign what is currently at the 2nd index which is 4 to index 1 -> 1,4,-,10
				array[j] = array[j+1];

		//Assign the next position in the array to what is in temp so 10
		//assign the second index location to 10
		//Assign the 3rd index location to 19
		//Now assign the 3rd index location to 10 which is in temp. So -> 1,4,10,9
		//Then we move back to the nested loop and iterate j by 1
		//Assign array j+1 -> 2+1 = index location 3 to the temp which is 10 -> So now (1,4,9,10)
		//Iterate j by 1 so j = 3 and move back to nested loop.
		//Assign index 2 element 3 to what is in temp so 9 -> 1,4,9,10 iterate j by 1  j = 2
				array[j+1] = temp;
			}
		}
	}
}
