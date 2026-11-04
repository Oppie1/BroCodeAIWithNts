#include <iostream>
#include<iomanip>
using namespace std;

//Function prototypes for void show balance, double deposit/withdraw. W/double parameter.
//CODE:
void showBalance(double balance);

double deposit();

double withdraw(double balance);

int main() {

	//Declare double var to store account balance. Initialized to value of your choosing.
	//CODE:
	double balance = 110.10;

	//Declare variable to store users choice initialized to 0.
	//CODE:
	int choice = 0;

	//Use do while loop  - continues until user exits.
	//CODE:

	do {
		//Display menu to user
		// Display menu to user
		cout << "\n*******************Bank Program*************************\n\n" << endl;
		cout << "Enter your choice\n";
		cout << "***********************************************************\n" << endl;
		cout << "1. Show Balance\n";
		cout << "2. Deposit Money\n";
		cout << "3. Withdraw Money\n";
		cout << "4. Exit\n";

		//Input users choice
		//CODE:
		cin >> choice;

		//Clear input buffer to prevent errors from invalid input.
		//CODE:
		cin.clear();
		fflush(stdin);

		//Use a switch statement to process users choice.
		//CODE:
		switch (choice) {

			//Case 1 show current balance. Call the showBalance func with balance arg. Then break 
			//CODE:
		case 1: showBalance(balance);
			break;

			//Case 2 deposit amount to balance and show new total. Assign balance += to call
			// deposit(). Then call showBalance() with balance as arg.
			//CODE:
		case 2: balance += deposit();
			showBalance(balance);
			break;

			//Case 3 withdraw amount. Assign balance -= to call withdraw() balance as parameter.
			//Then call showBalance() func again / balance as parameter
			//CODE:
		case 3: balance -= withdraw(balance);
			showBalance(balance);
			break;

			//Case 4 exit message when user selects 4 to quit. Then break.
			//CODE:
		case 4:
			cout << "\nAll done! Thanks for visiting!\n";
			break;

			//Use a default function for key mash/wrong selection.
			//CODE:
		default: cout << "You have pressed an incorrect key!" << endl;
		}
	} while (choice != 4);

	//Use while loop so long as choice does not equal4 to keep looping until user is done.
	//CODE:

}

//Define the void showBalance() with parameter double balance with two decimal places.
//Output that the user has a balance of... fixed << setprecision(2) then the balance var.
//CODE:
void showBalance(double balance) {

	cout << "Your balance is: $" << fixed << setprecision(2) << balance << endl;
}

//Define the deposit func. Declare var amount and set it to 0. Input amount from user.
//Then create an if statement to test if the amount is greater than 0. If it is return 
//amount. If not use and else stating its not a valid amount.
//CODE:
double deposit() {

	double amount = 0;

	cout << "Enter in amount you wish to deposit" << endl;

	cin >> amount;

	if (amount > 0) {

		return amount;
	}

	else {
		cout << "You did not enter a valid amount" << endl;
	}

}

//Define the withdraw func with double balance as parameter. Then create an uninitialized
//double amount variable. Input amount from user. Then use an if statement to see if
//the withdraw exceeds the account balance. If it does output insufficient funds.
//Use else if statement to see if the user entered a negative number and output that
//they cannot enter negative numer if they did. Finally, an else with output the 
//withdraw went through successful and return the amount to the caller.
//CODE:
double withdraw(double balance) {

		double amount;

		cout << "Enter amount you would like to withdraw: " << endl;

		cin >> amount;

		if (amount > balance) {

			cout << "You do not have enough money to withdraw that amount" << endl;
		}

		else if (amount < 0) {

			cout << "You cannot withdraw negative amount" << endl;
		}

		else {

			cout << "You withdraw went through successfully." << endl;

			return amount;

		}

	}
	