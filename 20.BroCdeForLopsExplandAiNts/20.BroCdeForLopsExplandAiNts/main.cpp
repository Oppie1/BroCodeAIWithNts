#include <iostream>
using namespace std;



int main() {

	//Create a for loop that starts with index at 1, continues while index is 3 or less, and increases
	// index by 2 each iteration. Inside the loop, display "Happy New Year" to the screen three times.
	//CODE:
	for (int index = 1; index <= 3; index++) {

		cout << "Happy New Year" << endl;
	}

	//Add a blank line for spacing.
	//CODE:
	cout << endl;

	//Set up a for loop where the variable i begins at 1, keeps running as long as i doesnt exceed 3,
	//and adds 1 to i after each loop iteration. Print "Happy New Year" three times.
	for (int i = 1; i <= 3; i++) {

		cout << "Happy New Year" << endl;
	}

	//Insert a blank line of code for spacing.
	//CODE:
	cout << endl;

	//Build a for loop starting at i = 1, looping while i is a most 5, and incrementing i by 1 each time.
	// Output "Happy New Year" five times in total.
	//CODE:
	for (int i = 1; i <= 5; i++) {

		cout << "Happy New Year" << endl;
	}

	cout << "\n";

	//Create a for loop that sets i to 1, continues while i is 10 or less, and increases i by 1 per a iteration.
	// In the loop body, print the current value of i. This will output the numbers 1 through 10, one per line.
	// After the loop finishes, print "Happy New Year"  once on a new line.
	//CODE:
	for (int i = 1; i <= 10; i++) {

		cout << i << '\n';
	}

	cout << "Happy New Year." << endl;

	cout << endl;

	//Write a for loop similar to the previous one (i starts at 1, runs up to 10), but this time increment i
	// by 2 instead of 1. This means only odd numbers will be printed:l 1, 3, 5, 7, and 9. Notice that when 
	// any line breaks (omit '/n' or endl). Then print "Happy New Year" after the loop. The output 
	// should read: l1357l9 Happy New Year
	//CODE:
	for (int i = 1; i <= 10; i += 2) {

		cout << i;
	}

	cout << " Happy new year" << endl;

	cout << endl;


	//Create another for loop starting with i = 0 (remember that computers count starting at 0, not 1).
	// Set the condition to i <= 10 and increment by 3 each time. Print i on a new line each iteration.
	// You should see: 0, 3, 6, 9 printed vertically. When i becomes 12, the loop stops because 12 exceeds 10.
	// After the loop, display "Happy New Year"
	//CODE:
	for (int i = 0; i <= 10; i += 3) {

		cout << i << '\n';
	}

	cout << "Happy New Year" << endl;

	cout << endl;

	//Set up a for loop that demonstrates counting backwards. Initialize i to 10, set the condition to i >= 0
	// (i is greater than or equal to 0), and use the decrement operator (--) to decrease i by 1 each iteration.
	// Print i to display a countdown from 10 to 0. After the loop ends, print "Happy New Year" on a new line.
	//CODE:
	for (int i = 10; i >= 0; i--) {

		cout << i << endl;
	}

	cout << "Happy New Year" << endl;

	cout << endl;

	//Write one more for loop starting at i = 10, running while i >= 0, but this time decrement by 2  using
	// the -= operator. Print each value of i on the same line without breaks. You'll see every other number
	// counting down:  10, 8, 6, 4, 2 ,0. Then print "Happy New Year" after the loop on the same line.
	//CODE:
	for (int i = 10; i >= 0; i -= 2) {

		cout << i;
	}

	cout << " Happy New Year" << endl;

}