#include<iostream>
using namespace std;


int main() {

	//Initialize the random number generator with time() so that rand() produces
	//different values each time the program runs.
	//CODE:
	srand(time(NULL));

	//Create three integer variables and initialize each to a random number between
	//1-6. Use the modulus operator (%) to get the remainder when dividing by 6,
	//then add 1. This ensures your range is 1-6 instead of 0-5. For example:
	//rand() % 6 gives 0-5, then + 1 shifts it to 1-6.
	//CODE:
	int num1 = (rand() % 6) + 1;
	int num2 =  rand() % 6 + 1;
	int num3 = (rand() % 6) + 1;

	//Output each number on a separate line.
	//CODE:
	cout << num1 << '\n';
	cout << num2 << '\n';
	cout << num3 << endl;
	
}