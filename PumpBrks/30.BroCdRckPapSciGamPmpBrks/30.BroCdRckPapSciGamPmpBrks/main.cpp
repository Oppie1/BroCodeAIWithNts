#include <iostream>
#include <ctime>
using namespace std;


//Create a function prototype of char data type for getUserChoice(). This function takes no parameters and will
//return a character representing the player's choice.
//CODE:
char getUserChoice();

//Create a function prototype for getComputerChoice. This func also takes no parameters and will
//return a character representing the computer's randomly selected choice.
//CODE:
char getComputerChoice();

//Create a void function prototype for showChoice(). This function accepts a single character parameter that
//represents a choice and displays it to the player.
//CODE:
void showChoice(char choice);

//Create a void func prototype for chooseWinner(). This function accepts two character parameters: one for the
//player's choice and one for the computer's choice. It will determine and display the winner of the round.
//CODE:
void chooseWinner(char playersChoice, char computersChoice);


int main() {

	//Declare two character variables: one named playerChoice to store the player's input, and another
	//named computer to store the computer's randomly generated choice.
	//CODE:
	char playersChoice;
	char computersChoice;

	//Call the getUserChoice() and store (assign) the returned character value into the playerChoice var.
	//CODE:
	playersChoice = getUserChoice();

	//Display a message to the screen indicating that the next line will show the player's choice.
	//CODE:
	cout << "\nYour choice was: " << endl;

	//Call the showChoice() and pass  the playerChoice var as an arg so the player can see what they selected.
	//CODE:
	showChoice(playersChoice);

	//Call the getComputerChoice() func and store the returned character value into the computer var.
	//CODE:

	computersChoice = getComputerChoice();

	//Display a message to the screen indicating that the next line will show the computer's choice.
	//CODE:
	cout << "Computers choice" << endl;

	//Call the showChoice() and pass the computer var as an arg so the player can see what the computer selected.
	//CODE:

	showChoice(computersChoice);

	//Call the chooseWinner() and pass both the playerChoice and computer var as args. This func
	//will compare the choices and determine the outcome. 
	//CODE:
	chooseWinner(playersChoice, computersChoice);

}


//Define getUserChoice
char getUserChoice() {

	char playersChoice;

	//Declare a local character var named playerChoice. This var will temporarily store the player's input
	//within this function. It shadows (temporarily replaces) playerChoice var from main() while inside this func.
	//CODE:

	//Display a welcome message introducing the game to the player.
	//CODE:
	cout << "\n***Paper Rock Scissor Game!***\n" << endl;

	//Create a do-while loop that prompts the player to choose rock, paper, or scissors. The loop displays
	//the three options and reads the player's input. The while condition checks that the input is NOT 'r', 
	//NOT 'p' and NOT 's's, all three condition s are falls and the loop exits, allowing the function to proceed
	//to the return statement.
	//CODE:
	do {


		cout << "Choose one of the following\n";
		cout << "******************************************\n\n";
		cout << "'r' for rock\n";
		cout << "'p' for paper\n";
		cout << "'s' for scissors\n";

		cin >> playersChoice;

	} while (playersChoice != 'r' && playersChoice != 'p' && playersChoice != 's');

	//Return the validated playerChoice to the caller (the main func)
	//CODE:
	return playersChoice;

}

//Define the getComputerChoice() func. This func generates a random choice for the computer
//to "play" against the player.
//CODE:
char getComputerChoice() {

	
	
	//Seed the random number generator using srand() with time (0) as the argument. This ensures
	//a different random sequence each time the program runs. Then, generate a random number between
	//1 and 3 by using rand() % 3 + 1. The modulus operator (%) gives us a remainder between 0 and 2,
	//and adding 1 shifts the range from 1-3.
	//Store this random number in an int var named num.
	//CODE:
	srand(time(0));
	int num = rand() % 3 + 1;

	//Create a switch statement that evaluates the random number stored in num case 1-3 and returns r, p,s.
	//CODE:
	switch (num) {

	case 1: return 'r';
	case 2: return 'p';
	case 3: return 's';

	}

}


//Define the showChoice() function. This function takes a character parameter representing a choice
//and displays the full word (Rock, Paper, or Scissors) to the player.
//CODE:
void showChoice(char choice) {


//Create a switch statement that evaluates the choice parameter. Depending on whether the choice is
//'r', 'p', or 's', display the corresponding full word. Include a break statement after each case
//to prevent the program from "falling through" to the next case and executing unintended code. When
//this function is called from main with showChoice(playerChoice) , the playerChoice value fills
//in the choice parameter.
//CODE:
	switch (choice) {

	case 'r': cout << "Rock\n";
		break;
	case 'p': cout << "Paper\n";
		break;
	case 's': cout << "Scissor\n";
		break;
	}

}

//Define the chooseWinner() func. This func takes two characters parameters:
//playerChoice and computer. It compares the two choices and determines whether the game
//is a tie, the player won, or the player lost.
//CODE:
void chooseWinner(char playersChoice, char computersChoice) {

	//Create a switch statement that evaluates the playerChoice. For each possible choice (r, p  or s),
	//nested if-else statements will check the computer's choice and determine the outcome. The flow is:
	//first, check if the computer made the same choice (tie). If not, check if the computer made the choice
	//that beats the player's choice (loss). If neither condition is true, the player must hav won (use else)
	//CODE:
	switch (playersChoice) {

		//Case 'r': The player chose rock. If the computer also chose rock, it's a tie. If the computer
		//chose paper, the player loses (paper covers rock). Otherwise, the computer chose scissors, and
		//the player wins (rock crushes scissors). Use break between each case.
		//CODE:
	case 'r':

		if (computersChoice == 'r') {

			cout << "It's a tie!" << endl;
		}

		else if (computersChoice == 'p') {

			cout << "You lose!" << endl;
		}

		else {

			cout << "You won!" << endl;
		}

		break;

		//Case 'p': The player chose paper. If the computer also chose paper, It's a tie. If the computer chose
		//rock, the player wins  (paper covers rock). Otherwise, the computer chose scissors, and the player
		//losses (scissors cuts paper).
		//CODE:

	case 'p': 

		if (computersChoice == 'p') {

			cout << "You tie!" << endl;
		}
		else if (computersChoice == 's') {

			cout << "You lose!" << endl;
		}

		else {

			cout << "You win!" << endl;
		}

		break;
			//Case s: The player chose scissors. If the computer also chose scissors, it's a tie. If the computer 
			//chose rock, the player loses (rock crushes scissors). Otherwise, the computer chose paper, and the 
			//player wins (scissors cuts paper).
	case 's': 

		if (computersChoice == 's') {

			cout << "You tie!" << endl;
		}

		else if (computersChoice == 'r') {

			cout << "You lose!" << endl;
		}

		else {

			cout << "You win!" << endl;
		}

		break;

	}

}
