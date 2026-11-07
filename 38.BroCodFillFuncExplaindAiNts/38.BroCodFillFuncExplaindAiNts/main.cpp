#include <iostream>
using namespace std;
#include <string>

//fill() = Fill a range of elements with a specialized value.
//Syntax: fill(begin, end, value)


int main() {

	//We need to specify how many food items we want to store in our array. Create a 
	//constant integer named size and set it to 99. This constant will define the total 
	//number of elements in our string array.
	//CODE:
	const int SIZE = 99;

	//Now create a string array called foods that can hold SIZE elements.
	//This array will  store out food names.
	//CODE:
	string foods[SIZE];

	//The fill() function allows us to populate multiple array positions  with the same value.
	//We'll fill  the first third of our array with "pizza"
	//For the first arg, start at the beginning of the foods array.
	//For the second arg, specify where to stop: at one-third of teh way through (SIZE / 3).
	//For the third arg, use "pizza" as the value to fill there positions.
	//CODE:
	fill(foods, foods + (SIZE) / 3, "pizza");

	//Next, we'll fill the middle third of the array with "hamburgers"
	// Start at position SIZE/3 (where the previous fill() ended)/
	//End at position (SIZE/3)*2, which is two thirds through the array.
	// Fill this section with "hamburgers".
	// CODE:
	fill(foods + (SIZE / 3), foods + (SIZE / 3) * 2, "hamburgers");

	//Finally, fill the last third of the array with "tacos". Start at position (SIZE/3) * 2
	//(tow-thirds through the array). End at foods + (SIZE/3) * 3, which represents the end
	//of the array. Fill this final section with "tacos"
	//CODE:
	fill(foods + (SIZE / 3) * 2, foods + (SIZE / 3) * 3, "tacos");

	//Now we'll display all the food items we've stored in the array. Use a range-based
	//for loop (also called a for-each loop) to go through each element. This loop
	//automatically iterates over every element in the foods array without needing to manually
	//manage index numbers. The variable 'food' will hold the actual string value from each position
	//as we loop through.
	//CODE:
	for (string food : foods) {

		cout << food<<endl;
	}
}

//IMPORTANT NOTE: In a range-based for loop, the loop variable (food) contains the actual value 
//from each array position, not the index number. This makes it much cleaner and safer to use when
//you don't need to track position numbers. It's one of the most readable ways to iterate through
//collections in modern C++.