#include<iostream>
using namespace std;



int main()
{
	//The break statement exits a loop immediately
	//The continue statement skips the current iteration and moves to the next one.
	// 
	// Example 1: Using break to exit a loop.
	// Create a for loop that counts from 1 to 10
	//CODE:
	for (int i = 1; i <= 20; i++) {

		//Check if i equals 13. If it does, exit the loop entirely. When i is 1-12, the loop prints 
		//normally. When i reaches 13, the break statement stops the loop, so 13-20 are never printed

		//Add an if stement that checks if i equals 13 and executes a break.
		//CODE:
		if (i == 13) {

			break;//

		}

		//Print the current value of i.
		//CODE:
		cout << i << endl;//
	}

	cout << '\n';

	//Example 2: using continue to skep an iteration. Create a for loop that counts from 1-20
	//CODE:
	for (int i = 1; i <= 20; i++) {

		//Check if i equals 13. If it does, skip to the next iteration. Unlike break, which stops the loop
		//entirely, continue allows the loop to keep runnig. The value 13 will be skipped, but 14-20 will still print

		//Add an if statment that checks if i equals 13 and executes a continue.
		//CODE:
		if (i == 13) {

			continue;

		}

		//Print the current value of i.
		//CODE.
		cout << i << endl;
	}
}