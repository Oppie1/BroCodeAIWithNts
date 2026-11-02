#include <iostream>
using namespace std;



int main() {

	//Declare three int vars: num for the secret number, guess for the player's input,
	// and tries (initialized to 0) to track the number of attempts.
	//CODE:
	int num;
	int guess;
	int tries = 0;

	//Initialize the random number generator with a seed based on the current time,
	// so we get different numbers each time the program runs.
	//CODE:
	srand(time(NULL));

	//Generate a random num between 1-100. The modulus operator (%) gives us the
	// remainder when dividing by 100, which ranges from 0-99, so we add 1 to shift
	// the range to 1-100.
	//CODE:
	num = (rand() % 6) + 1;

	cout << "****** Number Guessing Game******\n" << endl;

	//Start a do-while loop that will keep running until the player guesses correctly.
	//CODE:
	do {

		cout << "Enter a guess between 1 = 100: ";

		//Store the player's guess
		//CODE:
		cin >> guess;

		//Increase the attempt counter by one.
		//CODE:
		tries++;

		//Check if the guess is too high.
		//CODE:
		if (guess > num) {

			cout << "Your guess was too high" << endl;
		}

		//Check if the guess is too low.
		//CODE:
		else if (guess < num) {

			cout << "Your guess is too low" << '\n';

		}

		//If neither condition is true, the guess is correct. Output number of tries as well
		//CODE:
		else {

			cout << "You guessed the right number in " << tries << " tries" << endl;
		}
	}
	//The while condition ensures the loop repeats as long as the guess doesn't match
	//the secret number. ONce they match the loop exits.
	//CODE:
		while (guess != num);

	//Congratulate the player and display the correct number.
	//using the num variable.
	//CODE:
	cout << "Congratulations on guessing the number " << num << endl;
	cout << "\n******************The number Guessing game has concluded******\n" << endl;

}
